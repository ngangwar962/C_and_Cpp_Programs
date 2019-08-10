#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,p=1;
	int sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
		if(i%2==0)
		{
			int temp;
			temp=sum;
			for(j=1;j<=i;j++,temp--,p++)
			{
				cout<<temp;
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
}
