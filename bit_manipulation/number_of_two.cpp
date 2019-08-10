#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int count=0;
	int NO_OF_BITS=sizeof(int)*8;
	for(i=0;i<NO_OF_BITS;i++)
	{
		if(n&1<<i)
		count++;
	}
	if(count==1)
	cout<<"Yes number is in power of 2"<<"\n";
	else 
	cout<<"No"<<"\n";
	return 0;
}
