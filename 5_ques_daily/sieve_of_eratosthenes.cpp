#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	bool a[n+1]={0};
	for(i=2;i*i<=n;i++)
	{
		if(!a[i])
		{
			for(j=2;j*i<=n;j++)
			{
				a[i*j]=1;
			}
			if(a[n]==1)
			{
				cout<<i<<"\n";
				return 0;	
			}
		}
	}
	if(a[n]==0)
	cout<<n<<"\n";
	return 0;
}
