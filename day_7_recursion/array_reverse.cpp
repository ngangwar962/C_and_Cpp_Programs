#include<iostream>
using namespace std;
void array_reverse(int a[],int start,int end)
{
	if(start>=end)
	return;
	else
	{
		int temp;
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
	}
	array_reverse(a,start+1,end-1);
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	array_reverse(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
