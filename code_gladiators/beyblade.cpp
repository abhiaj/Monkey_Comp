#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%ld",&n)
#define min(v1) *min_element(v1.begin(), v1.end())
#define sort(v) sort(v.begin(),v.end())

int main(){

    long t;
    sl(t);
    foin(i,t) {
        long n;
        sl(n);

        vector<long> team1(n,0);
        foin(j,n) {
            long temp;
            sl(temp);
            team1[j] = temp;
        }

        vector<long> team2(n,0);
        foin(j,n) {
            long temp;
            sl(temp);
            team2[j] = temp;
        }

        sort(team1);
        sort(team2);

        long index1 = 0;
        long index2 = 0;
        long wins = 0;
        while(index1 < n) {
            if(team1[index1] <= team2[index2]){
                index1++;
            }
            else {
                index1++;
                index2++;
                wins++;
            }
        }
        cout<<wins<<endl;
    }
    return 0;
}
