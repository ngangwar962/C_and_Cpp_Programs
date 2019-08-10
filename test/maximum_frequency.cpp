#include<iostream>
using namespace std;
long int minim=10000;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		int index=i;
		int minim=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]<minim)
			{
				index=j;
				minim=a[j];
			}
		}
		int temp;
		temp=a[index];
		a[index]=a[i];
		a[i]=temp;
	}
	int localcount=0;
	int globalcounter=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(
		}
	}
	cout<<endl;
	return 0;
}
