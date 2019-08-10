#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int col1,col2;
	int n;
	cin>>n;
	col1=1;
	col2=n;
	for(i=1;i<n;i++)
	{	
		cout<<col1;
		for(j=1;j<=n-2;j++)
			cout<<" ";
		cout<<col2<<endl;
		col1++;
		col2--;	
	}
	for(i=n;i>0;i--)
	{
		cout<<i;
	}
	cout<<endl;
	col1=n-1;
	col2=2;
	for(i=1;i<=n-1;i++)
	{
		cout<<col1;
		for(j=1;j<=n-2;j++)
			cout<<" ";
		cout<<col2<<endl;
		col1--;
		col2++;
	}
	cout<<endl;
	return 0;
}
