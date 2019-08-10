#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=n;i>0;i--)
	{
		if(i==1||i==n)
		{
			for(j=1;j<=n;j++)
				cout<<j;
			cout<<endl;
		}
		else
		{
			for(j=1;j<=n;j++)
			{
				if(j==i)
				{
					cout<<i<<endl;
					break;
				}
				else
				{
					cout<<" ";
				}
			}	
		}	
	}
return 0;
}
