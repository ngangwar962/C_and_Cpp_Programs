#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,m;
	cin>>n>>m;
	int a[n][m];
	cout<<"enter the entries in 0 and 1"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int max=0;
	int index=0;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<m;j++)
		{
			if(a[j][i]==1)
			count++;	
		}
		if(count>max)
		{
			max=count;
			index=i+1;	
		}
	}
	cout<<index<<endl;
	return 0;
}
