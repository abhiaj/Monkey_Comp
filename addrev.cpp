#include <bits/stdc++.h>
using namespace std;

long rev(long m)
{
	long r=0;
	while(m!=0)
	{
		r=r*10+(m%10);
		m=m/10;
	}
	return r;
}

int main()
{
	int n;
	scanf("%d",&n);
	long arr[n][2];

	for(int i=0;i<n;i++)
	{
		scanf("%ld %ld",&arr[i][0],&arr[i][1]);
	}

	for(int i=0;i<n;i++)
	{
		printf("%ld",rev(rev(arr[i][0])+rev(arr[i][1])));
		printf("\n");
	}
	return 0;
}
