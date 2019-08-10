#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{	
		if(a[i]>0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<0)
				{
					int temp;
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					break;	
				}
			}
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
