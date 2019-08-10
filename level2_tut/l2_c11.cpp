#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,a,b,c,d;
a=1;
b=4;
c=15;
d=24;
cin>>n;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
for(i=5;i<=n;i++)
{
	if(i%2==0)
	{
		int diff=d-b;
		int temp=diff+16;
		b=d;
		d=temp;
		cout<<d<<" ";
	}
	else
	{
		int diff=c-a;
		int temp=diff+16;
		a=c;
		c=temp;
		cout<<temp<<" ";
	}
}
cout<<endl;
return 0;
}
