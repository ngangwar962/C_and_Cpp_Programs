#include<iostream>
using namespace std;
void seriesa(int,int,int);
void seriesb(int a,int b,int n)
{
	if(n==0)
	return;
	b=b*3;
	cout<<b<<",";
	seriesa(a,b,n-1);
	return;
}
void seriesa(int a,int b,int n)
{
	if(n==0)
	return;
	a=a*2;
	cout<<a<<",";
	seriesb(a,b,n-1);
	return;
}
int main()
{
	int a=4,b=-4,c,d,n,i;
	cin>>n;
	cout<<a<<","<<b<<",";
	seriesa(a,b,n);
	return 0;
}
