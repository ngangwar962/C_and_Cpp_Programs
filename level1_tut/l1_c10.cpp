#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int nspace=n-1,toprint=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=nspace;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=toprint;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		toprint+=2;
		nspace--;
	}
	toprint-=4;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=toprint;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		toprint-=2;
		nspace++;
	}
	return 0;
}
