#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n,k;
	scanf("%ld %ld",&n,&k);
	if(k==0||n==0)
		return 0;
	long count=0;
	long x;
	for(long i=0;i<n;i++)
	{
		scanf("%ld",&x);
		if(x%k==0)
			count++;
	}
	printf("%ld",count);
	return 0;
}
