#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
	if(a==0)
	return b;
	return GCD(b%a,a);
}
int main()
{
	int i,j,k;
	int rows,cols;
	cin>>rows>>cols;
	int a[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cin>>a[i][j];
		}
	}
	int gcd[rows][cols];
	int gcd_rows[rows];
	int gcd_cols[cols];
	for(i=0;i<rows;i++)
	{
		int max=0;
		int temp=a[i][0];
		for(j=0;j<cols-1;j++)
		{
			temp=GCD(temp,a[i][j+1]);
			if(temp>max)
			max=temp;
		}
		gcd_rows[i]=max;
	}
	for(i=0;i<rows;i++)
	{
		int max=0;
		int temp=a[0][i];
		for(j=0;j<cols-1;j++)
		{
			temp=GCD(temp,a[j+1][i]);
			if(temp>max)
			max=temp;
		}
		gcd_cols[i]=max;
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			gcd[i][j]=max(gcd_rows[i],gcd_cols[j]);
			cout<<gcd[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
