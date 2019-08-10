#include<iostream>
using namespace std;
void reverse(int a[],int start,int last)
{
	if(start>=last)
	return;
	int temp;
	temp=a[start];
	a[start]=a[last];
	a[last]=temp;
	reverse(a,start+1,last-1);
	return;
}
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	reverse(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
