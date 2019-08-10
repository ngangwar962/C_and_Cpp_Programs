#include<iostream>
using namespace std;
int main()
{
	int i,j,k,p=1,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,p++)
		{
			if(p%2)
			{
				cout<<"0";
			}
			else
			{
				cout<<"1";
			}
		}
		cout<<endl;
	}
return 0;
}
