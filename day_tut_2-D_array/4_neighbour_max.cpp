#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cin>>m>>n;
	int a[m][n];
	if(m==1||n==1)
	return 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
			/*if((i==0)&&(j==0))
			{
				if((a[i][j]>a[i][j+1])&&(a[i][j]>a[i+1][j]))
				{
					cout<<a[i][j]<<endl;
				}
			}
			if((i==0)&&(j==n-1))
			{
				if((a[i][j]>a[i][j-1])&&(a[i][j]>a[i+1][j]))
				{
					cout<<a[i][j]<<endl;
				}
			}
			if((i==0)&&((j!=0)||(j!=m-1)))
			{
				if((a[i][j]>a[i][j-1])&&(a[i][j]>a[i+1][j])&&(a[i][j]>a[i][j+1]))
				{
					cout<<" "<<a[i][j]<<endl;
				}
			}
			if((i==n-1)&&(j==0))
			{
				if((a[i][j]>a[i-1][j])&&(a[i][j]>a[i][j+1]))
				{
					cout<<" "<<a[i][j]<<endl;
				}
			}
			if((i==n-1)&&(j==m-1))
			{
				if((a[i][j]>a[i][j-1])&&(a[i][j]>a[i-1][j]))
				{
					cout<<" "<<a[i][j]<<endl;
				}
			}
			if((i==n-1)&&((j!=0)||(j!=m-1)))
			{
				if((a[i][j]>a[i][j-1])&&(a[i][j]>a[i-1][j])&&(a[i][j]>a[i][j+1]))
				{
					cout<<" "<<a[i][j]<<endl;
				}
			}*/
			if((a[i][j]>a[i][j-1])&&(a[i][j]>a[i-1][j])&&(a[i][j]>a[i][j+1])&&(a[i][j]>a[i+1][j]))
			{
				cout<<" "<<a[i][j]<<endl;
			}
		}
	}
	return 0;
}
