#include <bits/stdc++.h>
#include <cstring>
//#include <vector.h>
using namespace std;

void palin(char arr[])
{
	long length=strlen(arr);
	long index1= (length-1)/2;
	long index2= length/2;
	int change=0;

	while(index1>=0){

	if(arr[index1]<arr[index2] && change==0 )
	{
		arr[index1]+=1;
		arr[index2]=arr[index1];
		change++;
		index1--;
		index2++;
	}

	else if(arr[index1]>arr[index2] || change>0)
	{
		arr[index2]=arr[index1];
		change++;
	}

	else
	{
		index1--;
		index2++;
	}

	}

	printf("%s",arr);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		char arr[1000000];
		scanf("%s",arr);
		palin(arr);
		cout<<endl;
	}

	return 0;
}
