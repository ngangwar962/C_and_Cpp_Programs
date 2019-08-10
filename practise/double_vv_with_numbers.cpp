#include<iostream>
using namespace std;
int main()
{
	int i,j,k,rows,col;
	cin>>rows;
	int nspace=0,ispace=rows+1,bspace=1;
	for(i=0;i<rows;i++)
	{
		col=1;
		for(j=0;j<nspace;j++,col++)
		cout<<" ";
		cout<<col++;
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			cout<<" ";
			cout<<col++;
		}
		if(i!=0)
		{
			for(j=0;j<bspace;j++,col++)
			cout<<" ";
			cout<<col++;
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			cout<<" ";	
			cout<<col++<<endl;
		}
		if(i!=0)
		bspace+=2;
		nspace++;
		ispace-=2;
	}
	return 0;
}
