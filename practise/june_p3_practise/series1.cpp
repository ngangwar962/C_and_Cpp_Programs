#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a,b,n;
	cout<<"enter the first two terms and total no of terms"<<endl;
	cin>>a>>b>>n;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=n;i++)
	{
		if(i%2)
		{
			a=a*3;
			cout<<a<<" ";
		}
		else
		{
			b=b+3;
			cout<<b<<" ";
		}
	}
	cout<<endl;
	return 0;
}
