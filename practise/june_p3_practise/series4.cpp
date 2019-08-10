#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	char a,b;
	cout<<"enter the first two terms and total no of terms"<<endl;
	cin>>a>>b>>n;
	cout<<endl;
	cout<<a<<b<<",";
	for(i=2;i<=n;i++)
	{
		a=a+2;
		b+=3;
		cout<<a<<b<<",";
	}
	cout<<endl;
	return 0;
}
