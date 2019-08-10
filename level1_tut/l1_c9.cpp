#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	int nspace=n-2,ispace=1;
	for(int k=1;k<=nspace+1;k++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	for(i=2;i<=n;i++)
	{
		for(j=nspace;j>0;j--)
		{
			cout<<" ";
		}
		cout<<"*";
		for(j=ispace;j>0;j--)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		ispace+=2;
		nspace--;
	}
	ispace-=4;
	
	for(i=1;i<=n-2;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(j=1;j<=ispace;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		ispace-=2;
	}
	for(i=1;i<=n-1;i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	return 0;
	
}
