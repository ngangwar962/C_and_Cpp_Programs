#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	int a,b;
	cout<<"enter the first two terms and number of terms"<<endl;
	cin>>a>>b>>n;
	cout<<endl;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=n;i++)
	{
		if(i%2)
		{
			a=a*2;
			cout<<a<<" ";
		}
		else
		{
			b=b*3;
			cout<<b<<" ";
		}
	}
	cout<<endl;
	return 0;
}
