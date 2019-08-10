#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n],b[n];	
	for(i=0;i<n;i++)
	cin>>a[i];
	for(j=0;j<n;j++)
	cin>>b[j];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0&&b[i]%2==0)
		{
			a[i]=a[i]+b[i];
		}
		else if((a[i]%2)&&(b[i]%2))
		{
			a[i]*=b[i];
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
