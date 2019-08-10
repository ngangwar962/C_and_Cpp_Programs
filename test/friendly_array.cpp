#include<iostream>
#include<cstdlib>
#define MAX 100000
long int a[MAX];
using namespace std;
int main()
{
	long int i,j,k,n;
	cin>>n;
	if(n<=1)
	return 0;
	for(i=0;i<n;i++)
	cin>>a[i];
	long int sum=0;
	for(i=0;i<n;i++)
	{
		int min=MAX;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				int temp=abs(a[i]-a[j]);
				if(temp<min)
				{
					min=temp;
				}				
			}
		}
		sum+=min;
	}
	cout<<sum<<endl;
	return 0;
}
