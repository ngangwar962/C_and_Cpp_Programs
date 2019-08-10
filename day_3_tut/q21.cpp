#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;	
	int a[n];
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		count++;
	}
	if(count%2)
	cout<<1<<endl;
	else
	cout<<0<<endl;
	return 0;
}
