#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,value1=1;
	int value2;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	value2=n*n+n;
	int ref=n;
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=ref;j++,value1++)
		{
			cout<<value1<<"0";
		}
		int temp=value2-value1+2;
		for(j=1;j<=ref;j++,temp++)
		{
			cout<<temp<<"0";
		}
		ref--;
		cout<<endl;
	}
return 0;
}
