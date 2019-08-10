#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n+1]={0};
	for(i=2;i*i<=n;i++)
	{
		if(!a[i])
		{
			a[i]=2;
			for(j=2;j*i<=n;j++)
			{
				a[i*j]=1;
			}
		}
	}
	if(a[n]==0)
	{
		cout<<n<<"\n";
	}
	else
	{
		for(i=n;i>=2;i--)
		{
			if((a[i]==2)&&(n%i==0))
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
	return 0;
}
