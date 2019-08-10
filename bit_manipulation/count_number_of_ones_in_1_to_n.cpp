#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	long int count=0;
	int NO_OF_BITS=sizeof(int)*8;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<NO_OF_BITS;j++)
		{
			if(i&1<<j)
			{
				count++;
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
