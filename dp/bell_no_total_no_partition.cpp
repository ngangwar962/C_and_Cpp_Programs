#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cout<<"enter the number"<<"\n";
	cin>>n;
	int c[n+1][n+1];
	for(i=0;i<=n;i++)
	{
		c[i][0]=0;
	}
	for(j=0;j<=n;j++)
	{
		c[0][j]=0;
	}
	cout<<"initialization done"<<"\n";
	long long total_bell_count=0;
	for(i=1;i<=n;i++)
	{
		long long temp=0;
		for(j=1;j<=i;j++)
		{
			if(i==j||j==1)
			c[i][j]=1;
			else
			c[i][j]=c[i-1][j-1]+j*c[i-1][j];
			temp+=c[i][j];
		}
		total_bell_count+=temp;
	}
	cout<<total_bell_count<<"\n";
	return 0;
}
