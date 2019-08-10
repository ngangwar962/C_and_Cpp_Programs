#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	int max1=0;
	int max2=0;
	int index=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]>a[1])
	{
		max2=a[1];
		max1=a[0];
		index=1;
	}
	else
	{
		max2=a[0];
		max1=a[1];
		index=0;
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if((a[i]>max2)&&(a[i]<max1))
		{
			max2=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max2)
		{
			int j=i;
			while(j<n-1)
			{
				a[j]=a[j+1];
				j++;
			}
			n--;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
