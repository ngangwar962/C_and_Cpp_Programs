#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k;
	long int n;
	cin>>n;
	long int sq=sqrt(n);
	long int req=1;
	for(i=2;i<=n;i++)
	{
		long int count=0;
		while(n%i==0)
		{
			count++;
			n/=i;
		}
		if(count!=0&&count%2==1)
		{
		cout<<i<<"^"<<count<<" + ";
		req=req*i;
		}
	}
	cout<<"\n";
	cout<<req<<"\n";
	return 0;
}
