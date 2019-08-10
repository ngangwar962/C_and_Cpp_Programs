#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int NO_OF_BITS=sizeof(int)*8;
	int count=0;
	int no_of_zeroes=0;
	int flag=0;
	for(i=0;i<NO_OF_BITS;i++)
	{	
		if(n&1<<i)
		{
			count++;
			flag=1;
			if(count>1)
			{
				break;
			}
		}
		else
		{
			if(flag==0)
			no_of_zeroes++;
		}
	}
	if(no_of_zeroes%2==0&&count==1)
	cout<<"Yes"<<"\n";
	else
	cout<<"No"<<"\n";
	return 0;
}
