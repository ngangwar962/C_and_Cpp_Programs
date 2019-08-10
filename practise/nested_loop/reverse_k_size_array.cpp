#include<iostream>
using namespace std;
void reverse(int a[],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int temp;
	temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	reverse(a,start+1,end-1);
	return;
}
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the value of k"<<"\n";
	cin>>k;
	int times=n/k;
	int var=0;
	int start=0,end=n;
	for(i=0;i<times;i++,var++)
	{
		start=var*k;
		end=(var+1)*k-1;
		reverse(a,start,end);
	}
	start=times*k;
	end=n-1;
	reverse(a,start,end);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}
