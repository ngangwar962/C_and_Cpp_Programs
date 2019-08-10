#include<iostream>
using namespace std;
int a[100][100];
int n=0;
int region(int i,int j)
{
	if(i<0||i>n-1||j<0||j>n-1||a[i][j]!=1)
	return 0;
	cout<<"i= "<<i<<" j= "<<j<<endl;
	a[i][j]=-1;
	return region(i-1,j)+region(i,j+1)+region(i+1,j)+region(i,j-1)+1;
}
int main()
{
	int i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j])
			{
				int val=region(i,j);
				if(val>max)
				max=val;
				cout<<val<<endl;
			}
		}
	}
	cout<<"maximum path length is "<<max<<endl;
	return 0;
}
