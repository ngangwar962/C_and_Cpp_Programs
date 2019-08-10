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
	for(i=1;i<n;i++)
	{
		int maxi=0;
		for(j=0;j<i;j++)
		{
			if(l[i]>maxi)
			{
				maxi=l[i];
			}
		}
		
	}
}
