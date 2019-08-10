#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int c[n+m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	i=0;j=0;k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
			continue;
		}
		else if(a[i]>b[j])
		{
			j++;
			continue;
		}
		else if(a[i]==b[j])
		{
			i++;
			j++;
			continue;
		}
	}
	while(i<n)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
}
