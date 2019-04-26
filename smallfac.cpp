#include <bits/stdc++.h>
using namespace std;

void sf(int n){

	vector<int> arr;
	//cout<<arr.capacity();

arr.push_back(1);

for(int i=1;i<=n;i++)
{
	int j=0; int carry=0;
	while(j<arr.size())
	{
		int temp_jXi=arr[j]*i+carry;
		arr[j]=temp_jXi%10;
		carry=temp_jXi/10;
		j++;
	}

	arr.push_back(carry%10);
	if(carry/10!=0)
	arr.push_back(carry/10);
	if(carry/100!=0)
		arr.push_back(carry/100);
} 
int k=arr.size()-1;
while(arr[k]==0)
	k--;
for(;k>=0;k--)
cout<<arr[k];

}

int main(){

int n;
scanf("%d",&n);

for(int i=0;i<n;i++)
{
	int x;
	scanf("%d",&x);
	sf(x);
	cout<<endl;
}


return 0;
}