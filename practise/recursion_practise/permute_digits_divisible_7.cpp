#include<iostream>
#include<math.h>
using namespace std;
int n;
void permute(int a[],int start,int end)
{
	int i;
	if(start==end)
	{
		long int sum=0;
		int count=n-1;
		for(i=0;i<n;i++,count--)
		{
			sum=sum+a[i]*pow(10,count);
			//cout<<a[i]<<" ";
		}
		if(sum%7==0)
		cout<<sum<<endl;
		return;
	}
	for(i=start;i<end;i++)
	{
		swap(a[start],a[i]);
		permute(a,start+1,end);
		swap(a[start],a[i]);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	arr[i]=i+1;
	permute(arr,0,n);
	return 0;
}
