#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(j==1||j==n)
		{
			if(i<=3)
			cout<<i;
			else if(i>3&&i<=6)
			cout<<"*";
			else
			cout<<"N";
		continue;		
		}
		if(i==j)
		{
			if(i<=3)
			{
			    cout<<i;
			}
			if(i>3&&i<=6)
			cout<<"*";
			continue;
		}
		else
		{
			cout<<" ";	
		}
	}
	cout<<endl;
}
return 0;
}
