#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int flag=0;
	for(i=1;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				flag=1;			
				break;
			}
		}
		if(flag==0)
		{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				flag=1;
				break;
			}	
		}
		}
		if(flag==0)
		{
			cout<<a[i]<<endl;
			return 0;
		}
	}
	if(flag==1)
	cout<<"not found"<<endl;
	return 0;
	
}
