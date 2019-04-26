#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	scanf("%ld",&n);

	for(int i=0; i<n;i++)
	{
		long x;
		scanf("%ld",&x);

		long arr[x];
		for (int i = 0; i <x; ++i)
		{
			scanf("%ld",&arr[i]);
		}

		for(int i=0; i<x; i++) //bubble sort here could do better
		{
			for(int j=i; j<x; j++)
			{
				if(arr[i]>arr[j])
				{
					long temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}

		long diff_min=arr[1]-arr[0];
		long index=0;

		for(int i=1; i<x-1; i++)
		{
			long temp_diff=arr[i+1]-arr[i];
			if(temp_diff<diff_min)
			{
				diff_min=temp_diff;
				index=i;
			}
		}

		printf("%ld \n", diff_min);
	}

	return 0;
}	