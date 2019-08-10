#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int size,sum;
	cin>>size;
	int a[size+1];
	a[0]=0;
	for(i=1;i<=size;i++)
	cin>>a[i];
	cin>>sum;
	sort(a,a+size+1);
	for(i=0;i<=size;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	int subset[sum+1][size+1];
	for(i=0;i<=size;i++)
	{
		subset[0][i]=1;
	}
	for(i=0;i<=sum;i++)
	{
		subset[i][0]=0;
	}
	subset[0][0]=1;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=size;j++)
		{
			k=0;
			if(i>=a[j])
			{
				k=subset[i-a[j]][j-1];
			}
			subset[i][j]=k+subset[i][j-1];
			cout<<subset[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<subset[sum][size]<<"\n";
	return 0;
}
