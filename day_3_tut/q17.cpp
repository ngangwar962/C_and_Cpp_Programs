#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n;	
	cin>>n;
	char st[n+1];	
	cin>>st;
	int count=0,sum=0;
	for(i=n-1;i>=0;i--,count++)
	{
		if(st[i]=='1')
		sum+=pow(2,count);
	}
	cout<<sum<<endl;
	return 0;
}
