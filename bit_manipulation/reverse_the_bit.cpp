#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int NO_OF_BITS=sizeof(int)*8;
	int n;
	cin>>n;
	for(i=0;i<NO_OF_BITS;i++)
	{
		if(n&1<<i)
		{
			n=n^(1<<i);
		}
		else
		{
			n=n|1<<i;
		}
	}
	cout<<n<<"\n";
	return 0;
}
