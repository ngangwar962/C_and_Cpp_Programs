#include<iostream>
using namespace std;
int n,x;
void compare_elements(int index,int a[])
{
	int i;
	for(i=index+1;i<n;i++)
	{
		if(a[index]+a[i]==x)
		{
			cout<<"("<<a[index]<<","<<a[i]<<")"<<endl;
		}
	}
	return;
}
int main()
{
	int i,j,k;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	cout<<"enter the number x"<<endl;
	cin>>x;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		compare_elements(i,a);
	}
}
