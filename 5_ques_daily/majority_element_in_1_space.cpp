#include<bits/stdc++.h>
#define MAXINT 10000
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int mini=-1*MAXINT;
	for(i=0;i<n;i++)
	{
		if(a[abs(a[i])]>0&&a[i]!=0)
		{
			a[abs(a[i])]=-1*a[abs(a[i])];
		}
		else if(a[abs(a[i])]>0&&a[i]==0)
		{
			a[abs(a[i])]=mini;
		}
		else if(a[i]==0&&a[abs(a[i])]!=mini)
		{
			a[0]=mini;
		}
		else if(a[i]==0&&a[abs(a[i])]==mini)
		{
			cout<<abs(a[i]);
		}
		else if(a[abs(a[i])]<0)
		{
			cout<<abs(a[i])<<" ";
		}
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}
