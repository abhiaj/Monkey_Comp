#include <bits/stdc++.h>
using namespace std;

bool prime(long t)
{
	if(t==1)
		return false;
	for(long i=2;i<=sqrt(double(t));i++)
	{
		if(t%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long x;
	scanf("%ld",&x);
	long num[x][2];

	for(long i=0;i<x;i++)
	{
		long z1; long z2;
		scanf("%ld %ld",&z1,&z2);
		num[i][0]=z1; num[i][1]=z2;
	}

	for(long i=0;i<x;i++)
	{
		while(num[i][0]<=num[i][1])
		{
			if(prime(num[i][0])==true)
				{
					printf("%ld",num[i][0]);
					printf("\n");
				}
			num[i][0]++;
		}
		if(i!=(x-1))
			printf("\n");
	}
}

