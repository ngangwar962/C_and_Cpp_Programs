#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int value1=1,value2=n*n+n;
	int toprint=0;
	int rows=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<toprint;j++)
		{
			cout<<"*";
		}
		for(j=0;j<rows;j++,value1++)
		{
			cout<<value1<<"0";
		}
		int temp=value2-value1+2;
		for(j=0;j<rows;j++,temp++)
		{
			if(j!=rows-1)
			cout<<temp<<"0";
			else
			cout<<temp;
		}
		cout<<"\n";
		toprint+=2;
		rows--;
	}
	return 0;
}
