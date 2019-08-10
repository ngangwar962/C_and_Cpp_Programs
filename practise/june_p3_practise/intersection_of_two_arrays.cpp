#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n,m;
	cout<<"enter the size of the two arrays"<<endl;
	cin>>n>>m;
	int a[n],b[m],c[n+m];
	cout<<"enter the elements of the first array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the elements of the second array"<<endl;
	for(j=0;j<m;j++)
	cin>>b[j];
	i=0;
	j=0;
	k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			i++;
		}
		else if(a[i]>b[j])
		{
			j++;
		}
		else if(a[i]==b[j])
		{
			c[k]=a[i];
			i++;
			k++;
			j++;
		}
	}
	for(i=0;i<k;i++)
	cout<<c[i]<<" ";
	cout<<endl;
	return 0;
}
