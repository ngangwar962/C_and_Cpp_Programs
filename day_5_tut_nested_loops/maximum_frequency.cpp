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
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	int localcount=0;
	int globalcounter=0;
	int count=1;
	/*count=1;
	cout<<a[0]<<" "<<count<<endl;*/
	i=0;
	while(i<n-1)
	{
		count=1;
		while(a[i]==a[i+1])
		{
			count++;
			i++;
		}
		cout<<a[i++]<<" "<<count<<endl;
	}
	if(a[n-2]!=a[n-1])
	{
		cout<<a[n-1]<<" "<<"1"<<endl;
	}
	return 0;
}
