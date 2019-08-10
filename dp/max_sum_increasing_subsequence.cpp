#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	long int sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int l[n];
	l[0]=a[0];
	for(i=1;i<n;i++)
	{
		int maxi=0;
		int flag=0;
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				flag=1;
				if(l[j]>=maxi)
				{
					maxi=l[j];
				}
			}
		}
		if(flag==1)
		{
			l[i]=a[i]+maxi;
		}
		else
		{
			l[i]=a[i];
		}
	}
	int maxi=0;
	for(i=0;i<n;i++)
	{
		if(l[i]>maxi)
		maxi=l[i];
	}
	cout<<maxi<<"\n";
	return 0;
}
