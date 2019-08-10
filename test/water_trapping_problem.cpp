#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int b[n];
	b[0]=0;
	b[n-1]=0;
	for(i=1;i<n-1;i++)
	{
		int num1=a[i],num2=a[i];
		int flag=0;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>num1)
			{
				flag=1;
				num1=a[j];
			}
		}
		if(flag==0)
		{
			b[i]=0;
			continue;
		}
		else
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]>=num2)
				{
					num2=a[j];
				}
			}
		}
		if(num1>=num2)
		{
			b[i]=num2-a[i];
		}
		else
		{
			b[i]=num1-a[i];
		}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(b[i])
		count+=b[i];	
	}
	cout<<count<<"\n";
	return 0;
}
