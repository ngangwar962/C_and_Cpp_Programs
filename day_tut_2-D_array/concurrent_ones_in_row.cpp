#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,m;
	cin>>n>>m;
	int a[n][m];
	cout<<"input array should contain only 0 and 1"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int gmax=0;
	for(i=0;i<n;i++)
	{
		int count=0;
		int lmax=0;
		for(j=0;j<m;j++)
		{
			if((a[i][j]==0)&&(count==0))
			{
				continue;
			}
			else if((a[i][j]==0)&&(count!=0))
			{
				if(count>lmax)
				{
					lmax=count;
				}
				count=0;
			}
			else if(a[i][j]==1)
			{
				count++;
				if(j==m-1&&count>lmax)
				{
					lmax=count;
				}
			}
		}
		if(lmax>gmax)
		{
			gmax=lmax;
		}
	}
	cout<<gmax<<endl;
	return 0;
}
