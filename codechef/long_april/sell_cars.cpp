#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%ld",&n)
#define min(v1) *min_element(v1.begin(), v1.end())
#define MAX 1000000007
int main(){

    int t;
    si(t);
    foin(i,t) {
        long n;
        sl(n);
        vector<long> price;
        foin(j, n) {
            long temp;
            sl(temp);
            price.push_back(temp);
        }

        sort(price.begin(), price.end(), greater<long>());

        long sum = 0;
        // long dep = 0;
        foin(j, n) {
            price[j] = price[j] - j;
            if(price[j] > 0)
                sum=(sum+price[j])%MAX;
            else
                break;
        }

        printf("%ld\n",sum);
        //do something here
    }
    return 0;
}
