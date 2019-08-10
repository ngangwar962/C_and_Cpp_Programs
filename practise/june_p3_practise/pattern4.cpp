#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int rows,cols;
	cin>>rows;
	int nspace=0,ispace=5,iispace=1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<nspace;j++)
		cout<<" ";
		cout<<"*";
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++)
			cout<<" ";
			cout<<"*";
		}
		if(i!=0)
		{
			for(j=0;j<iispace;j++)
			cout<<" ";
			cout<<"*";
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
		nspace++;
		ispace-=2;
		if(i!=0)
		iispace+=2;
	}
		return 0;
}
