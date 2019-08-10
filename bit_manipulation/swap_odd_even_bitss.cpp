#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int NO_OF_BITS=sizeof(int)*8;
	string str="";
	for(i=0;i<NO_OF_BITS;i++)
	{
		if(n&1<<i)
		{
			str+='1';
		}
		else
		{
			str+='0';
		}
	}
	reverse(str.begin(),str.end());
	cout<<str<<"\n";
	int start=0,end=NO_OF_BITS-1;
	for(i=0;i<NO_OF_BITS-1;i+=2)
	{
		int first=n&(1<<end-i);
		int second=n&(1<<(end-(i+1)));
		if(first^second)
		{
			n=n^(1<<(end-i));
			n=n^(1<<(end-(i+1)));
		}
	}
	cout<<n<<"\n";
	string str2="";
	for(i=0;i<NO_OF_BITS;i++)
	{
		if(n&1<<i)
		{
			str2=str2+'1';	
		}
		else
		{
			str2+='0';
		}
	}
	reverse(str2.begin(),str2.end());
	cout<<str2<<"\n";
	return 0;
}
