#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,max;
	cin>>n;
	cout<<"jai ram jai hanuman"<<endl;
	for(i=1;i<=n-1;i++)
	{
		max=n+1-i;
		for(j=1;j<=i;j++)
		{
			cout<<max;
		}
		for(k=1;k<=n-i;k++)
		{
			max--;
			cout<<max;
		}
		max+=1;
		for(int l=1;l<=n-1-i;l++)
		{
			cout<<max;
			max++;
		}
		for(int m=1;m<=i;m++)
		{
			cout<<max;
		}
		cout<<endl;
	}
	for(j=1;j<=(2*n-1);j++)
	{
		cout<<"1";
	}
	cout<<endl;
	for(i=1;i<=n-1;i++)
	{
		max=i+1;
		for(j=1;j<=n-i;j++)
		{
			cout<<max;			
		}
		for(int k=j;k<=n;k++)
		{
			max--;
			cout<<max;
		}
		max++;
		for(int l=1;l<=i-1;l++)
		{
			cout<<max;
			max++;
		}
		for(int m=1;m<=n-i;m++)
		{
			cout<<max;
		}
		cout<<endl;
		
	}
return 0;
}
