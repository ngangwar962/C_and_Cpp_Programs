#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int rows,nspace,ispace;
	cin>>rows;
	nspace=rows-1;
	ispace=1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<nspace;j++)
		cout<<" ";
		cout<<"*";
		if(i!=0)
		{
			for(j=0;j<ispace;j++)
			cout<<" ";
			cout<<"*";
		}
		cout<<endl;
		nspace--;
		if(i!=0)
		ispace+=2;
	}
	return 0;
}
