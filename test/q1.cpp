#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the value of k"<<endl;
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]+a[j]==k)
				{
					cout<<"Yes"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"not found"<<endl;
	return 0;
}
