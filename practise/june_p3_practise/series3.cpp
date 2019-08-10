#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	char a,b;
	cout<<"enter the first and the second term and the total no of times"<<endl;
	cin>>a>>b>>n;
	cout<<endl;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=n;i++)
	{
		if(i%2)
		{
			a=a+2;
			cout<<a<<" ";
		}
		else
		{
			b=b-1;
			cout<<b<<" ";
		}
	}
	cout<<endl;
	return 0;
}


