#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,n;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	long long int count[n]={0};
	long long int number=0;
	long long int temp,bottle=n;
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(count[i]==0)
		{
			temp=a[i];
			for(j=i+1;j<n;j++)
			{
				if((temp<a[j])&&count[j]!=1)
				{
					temp=a[j];
					count[j]=1;
					bottle--;	
				}
					
			}
		}
	}
	cout<<bottle<<"\n";
	return 0;
}
