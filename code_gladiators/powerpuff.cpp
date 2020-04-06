#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(long x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<long>> mat( n , vector<long> (m, 0))
#define si(n) scanf("%ld",&n)
#define min(v1) *min_element(v1.begin(), v1.end())

int main(){

    long n;
    si(n);
    // cout<<sizeof(double);
    vector<long> quan_req(n,0);
    foin(i, n) {
        long temp;
        si(temp);
        quan_req[i] = temp;
    }

    vector<long> quan_pres(n,0);
    foin(i, n) {
        long temp;
        si(temp);
        quan_pres[i] = temp;
    }

    vector<long> num(n,0);
    foin(i, n) {
        num[i] = quan_pres[i]/quan_req[i];
    }

    cout<<min(num)<<endl;

    return 0;
}
