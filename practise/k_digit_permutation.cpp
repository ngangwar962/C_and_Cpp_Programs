#include<bits/stdc++.h>
using namespace std;
void permute(int arr[],int start,int last)
{
	int i;
	if(start==last)
	{
		for(i=0;i<last;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(arr[start],arr[i]);
		permute(arr,start+1,last);
		swap(arr[start],arr[i]);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	int arr[k];
	for(i=0;i<k;i++)
	{
		arr[i]=i+1;
	}
	permute(arr,0,k);
	return 0;
}
