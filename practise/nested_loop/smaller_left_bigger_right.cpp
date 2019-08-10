#include<iostream>
using namespace std;
int main()
{
	int i,k,j;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int flag1=0,flag2=0;
	for(i=1;i<n-1;i++)
	{
		flag1=0;
		flag2=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				flag1=1;
				break;
			}
		}
		if(flag1==0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					flag2=1;
					break;
				}
			}
			if(flag2==0)
			{
				cout<<a[i]<<"\n";
				return 0;
			}
		}
	}
	return 0;
}
