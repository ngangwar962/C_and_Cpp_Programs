#include<iostream>
using namespace std;
int main()
{
	int i,k,j,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int number;
	cin>>number;
	for(i=0;i<n;i++)
	{
		if(number==a[i])
		{
			cout<<i<<endl;
		}
	}
return 0;	
}
