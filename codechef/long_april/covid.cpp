#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%ld",&n)
#define min(v1) *min_element(v1.begin(), v1.end())

int main(){

    int t;
    si(t);
    foin(i,t) {
        //do something here
        long n;
        sl(n);
        vector<long> q;
        foin(j, n){
            long temp;
            sl(temp);
            q.push_back(temp);
        }
        int pos = -1;
        int follow = 1;
        foin(j,n){
            if(q[j] == 1) {
                if(pos != -1) {
                    if(j-pos<6){
                        follow = 0;
                        break;
                    }
                }
                pos = j;
            }
        }
        if(follow == 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
