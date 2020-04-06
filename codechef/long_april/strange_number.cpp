#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(long x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%ld",&n)
#define min(v1) *min_element(v1.begin(), v1.end())
#define MAX 1000000007
#define P_LIMIT 100000

// function to count the divisors 
long countDivisors(long n) 
{ 
    long cnt = 0; 
    for (long i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 


// Create a boolean array "prime[0..n]" and initialize 
// all entries it as true. A value in prime[i] will 
// finally be false if i is Not a prime, else true. 
bool prime[P_LIMIT + 1]; 
void SieveOfEratosthenes() 
{ 
	memset(prime, true, sizeof(prime)); 

	prime[1] = false; 

	for (long p = 2; p * p <= P_LIMIT; p++) { 

		// If prime[p] is not changed, then it is a prime 
		if (prime[p] == true) { 

			// Set all multiples of p to non-prime 
			for (long i = p * 2; i <= P_LIMIT; i += p) 
				prime[i] = false; 
		} 
	} 
} 

// find the product of 1st N prime numbers 
long solve(long x, long k) 
{ 
    long n = x;
    if(k==1){
        if(x!=1){
            return 2;
        }
        else return 0;
    }
	// count of prime numbers 
	long count = 0, num = 2; 
    for(long i=2; i<=sqrt(x); i++){
        while(n%i == 0){
            count++;
            n = n/i;
        }
        
        if(count >= k)
            return count;
    }
    if(n>1)
        count++;
        
	return count; 
} 

int main(){

    int t;
    si(t);
    vector<long> powers;
    long power = 1;
    while(power<MAX){
        powers.push_back(power);
        power*=2;
    }
    // SieveOfEratosthenes();
    // foin(j ,powers.size()) {
    //     cout<<powers[j]<<" ";
    // }
    // cout<<powers.size();
    foin(i,t) {
        long x;
        sl(x);
        long k;
        sl(k);
        if(k>powers.size()-1){
            cout<<"0"<<endl;
            continue;
        }
        else if(x < powers[k]) {
            cout<<"0"<<endl;
            continue;
        }
        else {
            long count = solve(x,k);
            if(count >= k ){
                cout<<"1"<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
        }
        //do something here
    }
    return 0;
}
