#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter which diagonal to print"<<endl;
	cin>>k;
	if(k<m)
	{
	        for(j=0,i=m-k;i<k;j++,i++)
		{
			cout<<a[i][j]<<" ";
		}
		
	}
	if(k==m)
	{
		for(i=0;i<m;i++)
		{
			cout<<a[i][i]<<" ";
		}
	}
	if(k>m)
	{
		int times=k%m;
		for(i=0,j=times;i<m,j<m;i++,j++)
		{
				cout<<a[i][j]<<" ";
		}
	}
	return 0;
}
