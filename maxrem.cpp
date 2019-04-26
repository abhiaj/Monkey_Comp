#include <bits/stdc++.h>
using namespace std;


int main(){

long n;
scanf("%ld",&n);

long a1=0;
long a2=0;

vector<long> s;

for(int i=0;i<n;i++)
{
	long x;
	scanf("%ld",&x);
	//sf(x);
	//cout<<endl;
	if(x>a1)
	{
		a2=a1;
		a1=x;
	}

	else if(x>a2 && x!=a1)
	{
		a2=x;
	}
	//s.push_back(x);
}

/*long rem=0;

for(int i=0; i<n; i++)
{
	
	for (int j = 0; j < n; j++)
	{
		long temp_rem=s[i]%s[j];

		if(temp_rem>rem)
			rem=temp_rem;
	}
}

cout<<rem;*/
cout<<a2;

return 0;
}