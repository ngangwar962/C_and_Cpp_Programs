#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,n,p=3;
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<p;
	}
	p++;
	cout<<endl;
}
i-=2;
p-=2;
for(k=1;k<=n-1;k++,i--)
{
	for(j=i;j>0;j--)
	{
		cout<<p;	
	}
	p--;
	cout<<endl;
}
return 0;
}
