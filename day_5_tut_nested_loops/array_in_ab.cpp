#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,flag=0,turn=0;
	cin>>n;
	int a[n];
	cout<<"enter the entries of the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	int a1,b1;
	int sq=sqrt(n);
	if(n==2)
	flag=1;
	if(n<2)
	{
		return 0;
	}
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		a1=1;
		b1=n;
		for(i=0;i<a1;i++)
		{
			for(j=0;j<b1;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		return 0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			for(j=i;j<=n/2;j++)
			{
				if(i*j==n)
				{
					a1=i;	
					b1=j;
					break;
				}
				if(i*j>n)
				{
					break;
				}
			}
		}
	}
	cout<<a1<<" "<<b1<<endl;
	int count=0;
	for(i=0;i<a1;i++)
	{
		for(j=0;j<b1;j++,count++)
		{
			cout<<a[count]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
