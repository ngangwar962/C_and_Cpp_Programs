#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n],b[n],c[n+n];	
	for(i=0;i<n;i++)
	cin>>a[i];
	for(j=0;j<n;j++)
	cin>>b[j];
	i=0,j=0,k=0;
	while(i<n&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<n)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(i=0;i<(2*n);i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
}
