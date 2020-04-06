#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
// #define foin(x, s, e) for(int x = s; x < e; x++)

#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)

void print_vector(vector<vector<int>> mat) {
    foin(i, mat.size()) {
        foin(j, mat.size()) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
}

bool check_fit(vector<vector<int>> mat, int n, int k, int row, int col, int num) {
    foin(i, row) {
        if(mat[i][col] == num)
            return false;
    }

    foin(i, col) {
        if(mat[row][i] == num)
            return false;
    }

    int sum = 0;
    int num_rows = 0;
    foin(i, row) {
        sum+=mat[i][i];
        num_rows++;
    }
    if(col > row) {
        sum+=mat[row][row];
        num_rows++;
    }
    else if(col == row) {
        sum+= num;
        num_rows++;
    }

    // k can not be greater than max value or less than min value at any point
    if( ( k > sum + (n-num_rows)*n ) ||  (k < sum + (n-num_rows) ))
        return false;

    return true;
}

bool find_sol(vector<vector<int>> mat, int n, int k, int row, int col, vector<vector<int>> &soln) {

    // print_vector(mat);
    if(col == n) {
        col = 0;
        row++;
    }
    if(row >= n) {
        soln = mat;
        return true;
    }
    bool res;
    for(int i = 1; i<=n; i++) {
        bool check = check_fit(mat, n, k, row, col, i);
        if(check == true){
            mat[row][col] = i;
            res = find_sol(mat, n, k, row, col+1, soln);
            if(res == true){
                // print_vector(mat);
                return res;
            }
        }
        else {
            continue;
        }
    }
    // printf("IMPOSSIBLE");
    return false;
}

int main(){

    int t;
    si(t);
    foin(i,t) {
        //do something here
        int n,k;
        si(n);
        si(k);
        // n=50;
        // k=100;
        matrix(mat, n, n);
        int num_present = k/n;
        // foin(j, n) {
        //     mat[0][j] = num_present;
        //     num_present++;
        //     if(num_present>n)
        //         num_present = 1;
        // }
        matrix(soln, n, n);
        bool res = find_sol(mat, n, k, 0, 0, soln);
        if(res == false) {
            cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<endl;
        }
        else {
            cout<<"Case #"<<i+1<<": "<<"POSSIBLE"<<endl;
            print_vector(soln);
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// #define foin(x,n) for(int x = 0; x < n; x++)
// // #define foin(x, s, e) for(int x = s; x < e; x++)

// #define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
// #define si(n) scanf("%d",&n)

// void print_vector(vector<vector<int>> mat) {
//     foin(i, mat.size()) {
//         foin(j, mat.size()) {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // cout<<endl;
// }

// bool check_fit(vector<vector<int>> mat, int n, int k, int row, int col, int num) {
//     foin(i, row) {
//         if(mat[i][col] == num)
//             return false;
//     }

//     foin(i, col) {
//         if(mat[row][i] == num)
//             return false;
//     }

//     int sum = 0;
//     if(col == n-1 && row == n-1) {
//         foin(i, n-1) {
//             sum+=mat[i][i];
//         }
//         sum+=num;
//         if(sum != k)
//             return false;
//     }

//     return true;
// }

// bool find_sol(vector<vector<int>> mat, int n, int k, int row, int col, vector<vector<int>> &soln) {

//     // print_vector(mat);
//     if(row == n) {
//         row = 0;
//         col++;
//     }
//     if(col >= n) {
//         soln = mat;
//         return true;
//     }
//     bool res;
//     for(int i = 1; i<=n; i++) {
//         bool check = check_fit(mat, n, k, row, col, i);
//         if(check == true){
//             mat[row][col] = i;
//             res = find_sol(mat, n, k, row+1, col, soln);
//             if(res == true){
//                 // print_vector(mat);
//                 return res;
//             }
//         }
//         else {
//             continue;
//         }
//     }
//     // printf("IMPOSSIBLE");
//     return false;
// }

// int main(){

//     int t;
//     si(t);
//     foin(i,t) {
//         //do something here
//         int n,k;
//         si(n);
//         si(k);
//         matrix(mat, n, n);
//         matrix(soln, n, n);
//         bool res = find_sol(mat, n, k, 0, 0, soln);
//         if(res == false) {
//             cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<endl;
//         }
//         else {
//             cout<<"Case #"<<i+1<<": "<<"POSSIBLE"<<endl;
//             print_vector(soln);
//         }
//     }
//     return 0;
// }

