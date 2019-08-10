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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(i!=j&&j!=k&&k!=i)
				{
					if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
					{
						cout<<"YES"<<"\n";
						return 0;
					}
				}
			}
		}
	}
	cout<<"not found"<<"\n";
	return 0;
}
