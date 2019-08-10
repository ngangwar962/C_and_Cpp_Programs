#include<bits/stdc++.h>
using namespace std;
void generate(int arr[],int start,int last)
{
	int i;
	if(start==last)
	{
		for(i=0;i<last;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";
		return;
	}
	for(i=0;i<10;i++)
	{
		arr[start]=i;
		generate(arr,start+1,last);
	}
}
int main()
{
	int i,j,k;
	cin>>k;
	int arr[k];
	for(i=1;i<=9;i++)
	{
		arr[0]=i;
		generate(arr,1,k);
	}
	return 0;
}
