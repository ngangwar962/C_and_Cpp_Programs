#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,sum=0,n;
	cin>>n;
	int ispace=n-1;
	int toprint=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=ispace;j++)
		{
			cout<<" ";	
		}	
		for(k=1;k<=toprint;k++)
		{
			cout<<"*";
		}
		cout<<endl;
		toprint+=2;
		ispace--;
	}
	return 0;
	
}
