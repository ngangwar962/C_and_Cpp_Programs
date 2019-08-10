#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int min=10000;
	int max=-1;
	min=a[0];
	int min_index=0;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if((i==n-1)&&(a[i]>max))
		{
			cout<<"("<<min_index<<","<<i<<")"<<" ";
			continue;
		}
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min||a[i]<max)
		{
			min=a[i];
			max=a[i];
			cout<<"("<<min_index<<","<<i-1<<")"<<" ";
			min_index=i;
		}
	}
	return 0;
}
	
