#include<iostream>
using namespace std;
void reverse(int a[],int begin,int last)
{
	if(begin>=last)
	return;
	int temp;
	temp=a[begin];
	a[begin]=a[last];
	a[last]=temp;
	reverse(a,begin+1,last-1);
	return;
}
int main()
{
	int i,j,k;
	int n;
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
