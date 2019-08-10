#include<bits/stdc++.h>
using namespace std;
bool arr[1000000]={0};
int main()
{
	int i,j,k;
	int n;
	cin>>n;
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
		if(arr[i]==0)
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
