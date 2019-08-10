#include<bits/stdc++.h>
using namespace std;
int check(int data[],int county,int index)
{
	int i;
	int even_count=0,odd_count=0;
	int count[51]={0};
	for(i=0;i<county;i++)
	{
		count[data[i]]++;
	}
	for(i=0;i<=50;i++)
	{
		if(count[i])
		{
			if(count[i]%2==0)
			even_count++;
			else
			odd_count++;
		}
	}
	if(even_count>=0&&odd_count==1)
	{
		return 1;
	}
	else if(even_count>=1&&odd_count==0)
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	int c1=0;
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			count=0;
			int data[n-j];
			for(k=i;k<n-j;k++)
			{
				data[count++]=a[k];
			}
			if(check(data,count,0))
			{
				c1++;
			}
		}
	}
	cout<<c1<<"\n";
	return 0;
}
