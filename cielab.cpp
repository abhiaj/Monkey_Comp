#include<bits/stdc++.h>
using namespace std;

int main()
{
	long a;
	long b;

	scanf("%ld %ld",&a,&b);

	long c=a-b;

	if(c%10<=8)
		c+=1;
	else
		c-=1;

	printf("%ld \n",c );

	return 0;
}