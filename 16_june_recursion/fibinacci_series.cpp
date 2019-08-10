#include<iostream>
#include<math.h>
using namespace std;
int check(int n)
{
	int sq=sqrt(n);
	return (sq*sq==n);
}
int main()
{
	int i,j,k,n;
	int t;
	cin>>t;
	while(t)
	{
		cin>>n;
		int flag1=check(5*n*n+4);
		int flag2=check(5*n*n-4);
		if(flag1||flag2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		t--;
	}
	return 0;
}
