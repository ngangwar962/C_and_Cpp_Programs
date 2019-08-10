#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the number of k"<<endl;
	cin>>k;
	int count=0;
	if(k<n)
	{
		for(i=k;i>=0;i--,count++)
		{
			cout<<a[i][count]<<" ";
		}
	}
	else
	{
		count=n-1;
		for(i=k-n+1;i<=n-1;i++,count--)
		{
			cout<<a[count][i]<<" ";
		}
	}
	return 0;
}
