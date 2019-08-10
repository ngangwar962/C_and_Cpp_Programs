#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int rows,nspace,ispace,iispace;
	cin>>rows;
	nspace=0;
	ispace=5;
	iispace=1;
	for(i=0;i<rows;i++)
	{
		int col=1;
		for(j=0;j<nspace;j++,col++)
		cout<<" ";
		cout<<col++;
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			{
				cout<<" ";
			}	
			cout<<col++;
		}
		if(i!=0)
		{
			for(j=0;j<iispace;j++,col++)
			{
				cout<<" ";
			}
			cout<<col++;
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			{
				cout<<" ";
			}
			cout<<col++;
		}
		cout<<endl;
		nspace++;
		ispace-=2;
		if(i!=0)
		iispace+=2;
	}
	return 0;
}
