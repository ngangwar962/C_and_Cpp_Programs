#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int NO_OF_BITS=sizeof(int)*8;
	int flag=0;
	int start=0,end=NO_OF_BITS-1;
	while(start<end)
	{
		if((n&1<<start)^(n&&1<<end))
		{
			flag=1;
			break;
		}
		else
		{
			start++;
			end--;
		}
	}
	if(flag==1)
	cout<<"No"<<"\n";
	else
	cout<<"Yes"<<"\n";
	return 0;
}
