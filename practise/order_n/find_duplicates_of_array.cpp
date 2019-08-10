#include<bits/stdc++.h>
#define MAX_INT 100000
using namespace std;
int main()
{
	long int i,j,k;
	long int n;
	cin>>n;
	long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		//cout<<a[abs(a[i])]<<" ";
		if(a[i]!=-1*MAX_INT&&a[abs(a[i])]>0)
		{
			//cout<<a[abs(a[i])]<<" greater than 0"<<"\n";
			a[abs(a[i])]=-1*a[abs(a[i])];
		}
		else if(a[i]==-1*MAX_INT&&a[0]<0)
		{
			cout<<"0"<<" ";
		}
		else if(a[abs(a[i])]==0)
		{
			a[a[i]]=-1*MAX_INT;
		}
		else if(a[abs(a[i])]<0&&a[i]!=-1*MAX_INT)
		{
			//cout<<a[abs(a[i])]<<" smaller than 0"<<"\n";
			cout<<abs(a[i])<<" ";
		}
		else if((a[i]==(-1*MAX_INT))&&(a[0]<0))
		{
			cout<<abs(a[i])<<" ";
		}
		else
		{
			a[abs(a[i])]=-1*MAX_INT;
		}
		//cout<<a[abs(a[i])]<<" ";
	}
	cout<<"\n";
	return 0;
}
