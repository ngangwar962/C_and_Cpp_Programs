#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int rows,nspace,toprint;
	cin>>rows;
	nspace=rows-1;
	toprint=1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<nspace;j++)
		{
			cout<<" ";
		}
		for(j=0;j<toprint;j++)
		cout<<"*";
		cout<<endl;
		toprint+=2;
		nspace--;
	}
	return 0;
}
