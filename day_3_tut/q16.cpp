#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cin>>n>>m;
	char st1[n+1],st2[m+1];
	cin>>st1>>st2;
	int count=0;
	int sum1=0;
	for(i=n-1;i>=0;i--,count++)
	{
		if(st1[i]=='1')
		sum1=sum1+pow(2,count);
	}
	int sum2=0;
	count=0;
	for(i=m-1;i>=0;i--,count++)
	{
		if(st2[i]=='1')
		sum2=sum2+pow(2,count);
	}
	int difference=abs(sum1-sum2);
	cout<<difference<<endl;
	return 0;
}
