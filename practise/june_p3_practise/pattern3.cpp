#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int rows,nspace=1,ispace;
	cin>>rows;
	ispace=5;
	for(i=0;i<rows;i++)
	{
		if(i!=0)
		{
			for(j=0;j<nspace;j++)
			cout<<" ";
		}
		cout<<"*";
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
		if(i!=0)
		nspace++;
		ispace-=2;
	}
	return 0;
}
