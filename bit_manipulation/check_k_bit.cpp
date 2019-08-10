#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter the number and k bit"<<"\n";
	cin>>n>>k;
	if(n&1<<k)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
