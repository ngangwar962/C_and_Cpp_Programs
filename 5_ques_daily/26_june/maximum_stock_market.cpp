#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int dollars;
	cin>>dollars;
	int count=0;
	for(i=0;i<n;i++)
	{
		int money=(i+1)*a[i];
		if(money<dollars)
		{
			count+=(i+1);
			dollars=dollars-money;
		}
		else
		{
			for(j=1;j<=(i+1);j++)
			{
				if(j*a[i]<dollars)
				{
					count+=j;
					dollars=dollars-(j*a[i]);
				}
				else
				{
					break;
				}
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
