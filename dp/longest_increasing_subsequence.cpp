#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int l[n];
	l[0]=1;
	for(i=1;i<=n;i++)
	{
		int maxi=0;
		int flag=0;
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				flag=1;
				if(l[j]>=maxi)
				maxi=l[j];
			}
		}
		if(flag==0)
		{
			l[i]=1;
		}
		else
		{
			l[i]=maxi+1;
		}
	}
	cout<<l[n-1]<<" ";
	return 0;
}
