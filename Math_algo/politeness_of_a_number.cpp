#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int count=0;
	for(i=2;i<=n;i++)
	{
		if(n%i==0&&i%2==1)
		{
			count++;
		}
	}
	cout<<count<<"\n";
}
