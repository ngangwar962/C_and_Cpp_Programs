#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	bool arr[n]={0};
	arr[2]=0;
	for(i=2;i*i<=n;i++)
	{
		if(!arr[i])
		{
			for(j=2;i*j<=n;j++)
			{
				arr[i*j]=1;
			}
		}
	}
	for(i=2;i<=n;i++)
	{
		if(!arr[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
