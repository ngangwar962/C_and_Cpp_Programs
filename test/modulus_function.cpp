#include<iostream>
using namespace std;
long int power(int a,int b)
{
	if(b==0)
	return 1;
	return a*power(a,b-1);
}
int main()
{
	long int i,j,k,t,a,b,c;
	cin>>a>>b>>c;
	cout<<endl;
	cout<<a<<" "<<b<<" "<<c<<endl;
	long int res=1;
	for(i=0;i<b;i++)
	{
		int temp=a%c;
		cout<<temp<<endl;
		res=res*temp;
	}
	if(res%c<0)
	cout<<(res%c)+1000000007<<endl;
	return 0;
}
