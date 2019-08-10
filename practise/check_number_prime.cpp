#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int res[n]={0};
	res[2]=0;
	for(i=2;i*i<=n;i++)
	{
		if(!res[i])
		{
			for(j=2;i*j<=n;j++)
			{
				res[i*j]=1;
			}
		}
	}
	for(i=2;i<=n;i++)
	if(!res[i])
	cout<<i<<" ";
	cout<<endl;
	return 0;
}
