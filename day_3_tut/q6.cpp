#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cout<<"enter the length of the two arrays"<<endl;
	cin>>n>>m;
	int a[n],b[m];
	int maxa=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(maxa<a[i])
		maxa=a[i];
	}
	cout<<"enter the element of the second array"<<endl;
	int maxb=0;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		if(maxb<b[i])
		{
			maxb=b[i];
		}
	}
	//cout<<"max in the array is "<<maxb<<endl;
	maxb++;
	maxa++;
	int c[maxa]={0};
	for(i=0;i<m;i++)
	{
		c[b[i]]++;
	}
	for(i=0;i<maxa;i++)
	cout<<c[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(c[a[i]]==0)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
	
	
}
