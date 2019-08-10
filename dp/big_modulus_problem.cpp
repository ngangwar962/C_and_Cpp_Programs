#include<iostream>
#define MAX 1000000007
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	int a,b;
	long long term=1;
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		long long temp=(term*(a%MAX))%MAX;
		if(temp<0)
		{
			term=temp+MAX;
		}
		else
		{
			term=temp;
		}
		//cout<<term<<"\n";
	}
	cout<<term<<"\n";
	return 0;
}
