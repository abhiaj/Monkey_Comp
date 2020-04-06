#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)


bool compare_time(vector<int> a, vector<int> b) {
    return (a[0] < b[0]);
}

int main(){

    int t;
    si(t);
    foin(i,t) {
        int n;
        si(n);
        matrix(mat,n,3);
        foin(j,n) {
            foin(k,2) {
                int x;
                si(x);
                mat[j][k] = x;
            }
            mat[j][2] = j;
        }

        sort(mat.begin(), mat.end(), compare_time);\
        string S = "";
        string S_order;
        int c_end = 0;
        int j_end = 0;
        foin(j, n) {
            int start = mat[j][0];
            int end = mat[j][1];
            if (start >= c_end){
                S += "C";
                c_end = end;
            }
            else if(start >= j_end){
                S += "J";
                j_end = end;
            }
            else {
                printf("Case #%d: IMPOSSIBLE\n",i+1);
                goto ret;
            }
        }
        S_order = S;
        foin(j, n) {
            int index = mat[j][2];
            S_order[index] = S[j];
        }
        // printf("%s\n",S);
        cout<<"Case #"<<i+1<<": "<<S_order<<endl;

        ret:
            continue;
    }
    return 0;
}
