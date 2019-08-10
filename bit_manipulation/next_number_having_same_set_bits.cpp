#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int count0=0,count1=0;
	int NO_OF_BITS=sizeof(int)*8;
	for(i=0;i<NO_OF_BITS;i++)
	{
		if(n&1<<i)
		{
			count0++;
		}
	}
	int number=n+1;
	while(true)
	{
		count1=0;
		for(i=0;i<NO_OF_BITS;i++)
		{
			if(number&1<<i)
			{
				count1++;
			}
		}	
		if(count0==count1)
		{
			cout<<number<<"\n";
			break;
		}
		else
		{
			number++;
		}	
	}
	return 0;
}
