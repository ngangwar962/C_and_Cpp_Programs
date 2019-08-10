#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n,m;
	cout<<"enter the size of two arrays"<<endl;
	cin>>n>>m;
	int a[n],b[m],c[n+m];
	cout<<"enter the elements of the first array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the elements of the second array"<<endl;
	for(j=0;j<m;j++)
	{
		cin>>b[j];
	}
	i=0;j=0;k=0;
	while(i<n&&j<n)
	{
		if(a[i]>=b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	while(i<n)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<m)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(i=0;i<n+m;i++)
	cout<<c[i]<<" ";
	cout<<endl;
	return 0;
}
