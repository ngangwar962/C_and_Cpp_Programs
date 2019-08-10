#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int rows,ispace,nspace,iispace;
	cout<<"enter the number of rows"<<endl;
	cin>>rows;
	nspace=0;
	ispace=5;
	iispace=1;
	char str[100];
	cout<<"enter the string"<<endl;
	cin>>str;
	int col;
	for(i=0;i<rows;i++)
	{
		col=0;
		for(j=0;j<nspace;j++,col++)
		cout<<" ";
		cout<<str[col++];
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			{
				cout<<" ";
			}
			cout<<str[col++];
		}
		if(i!=0)
		{
			for(j=0;j<iispace;j++,col++)
			{
				cout<<" ";
			}
			cout<<str[col++];
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			{
				cout<<" ";
			}
			cout<<str[col++];
		}
		cout<<endl;
		nspace++;
		ispace-=2;
		if(i!=0)
		iispace+=2;
	}
	return 0;
}
