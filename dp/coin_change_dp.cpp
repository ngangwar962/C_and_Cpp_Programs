#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int N,m;
	cin>>N;
	cout<<"array ready"<<"\n";
	int s[]={0,2,5,10,25,50};
	m=(sizeof(s)/sizeof(int));
	cout<<"size is computed"<<"\n";
	cout<<m<<"\n";
	long long c[N+1][m+1];
	for(i=0;i<=N;i++)
	{
		c[i][0]=0;
	}
	for(j=0;j<=m;j++)
	{
		c[0][j]=1;
	}
	c[0][0]=1;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=m;j++)
		{
			k=0;
			if(i>=s[j])
			{	
				k=c[i-s[j]][j];	
			}
			c[i][j]=k+c[i][j-1];
		}
	}
	for(i=0;i<=N;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}
