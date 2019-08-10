#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,p=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++,p++)
			{
				cout<<"-"<<p;
			}
			cout<<endl;
		}
		else
		{
			for(j=1;j<=i;j++,p++)
			{
				cout<<p;
			}
			cout<<endl;
		}
	}
	return 0;
}
