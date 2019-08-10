#include<iostream>
#include<bits/stdc++.h>
#include<map>
#define MAX 1000000007
using namespace std;
long int county=0;
void permute(long int a[],long int start,long int last)
{
	int i;
	if(start==last)
	{
		for(i=0;i<last;i++)
		{
			if(a[i]==i+1)
			{
				return;
			}
		}
		county=(county+1)%MAX;
		if(county<0)
		county=county+MAX;
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(a[start],a[i]);
		permute(a,start+1,last);
		swap(a[start],a[i]);
	}
	return;
}
int main()
{
	map<int,int> m;
	long int i,j,k,n;
	cin>>n;
	long int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		m[i]=i+1;
	}
	permute(a,0,n);
	long rem=county%MAX;
	if(rem<0)
	rem=rem+MAX;
	cout<<rem<<"\n";
	return 0;
}
