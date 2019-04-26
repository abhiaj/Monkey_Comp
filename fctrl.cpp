#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++)
	{
		long z;
		scanf("%ld",&z);
		long ff=5; long count=0; long ch=0;
		do
		{
			count=count+(z/ff);
			ff=ff*5;
			ch=z/ff;
		}
		while(ch!=0);
		printf("%ld \n",count);
	}
	return 0;
}