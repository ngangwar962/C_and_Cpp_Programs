#include<bits/stdc++.h>
using namespace std;
void gstring(int arr[],int start,int last)
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
	for(i=0;i<=9;i++)
	{
		arr[start]=i;
		gstring(arr,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	int arr[k];
	for(i=1;i<=9;i++)
	{
		arr[0]=i;
		gstring(arr,1,k);
	}
	return 0;
}
