#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	int catalon[n+1];
	catalon[0]=1;
	catalon[1]=1;
	for(i=2;i<=n;i++)
	{
		int temp=0;
		for(j=0;j<i;j++)
		{
			temp=temp+catalon[j]*catalon[i-j-1];
		}
		catalon[i]=temp;
	}
	cout<<catalon[n]<<"\n";
	return 0;
}
