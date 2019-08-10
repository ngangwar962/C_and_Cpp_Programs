#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,row,col;
cin>>row>>col;
for(i=1;i<=col;i++)
cout<<"*";
cout<<endl;
for(i=1;i<=row-2;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<" ";
	}
	cout<<"*";
	for(j=1;j<=col-2;j++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
}
for(j=1;j<=i;j++)
{
	cout<<" ";
}
for(j=1;j<=col;j++)
cout<<"*";
cout<<endl;
return 0;
}
