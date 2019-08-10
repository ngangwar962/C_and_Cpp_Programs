#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="RamanClasses";
	int len=strlen(str);
	int rows,nspace,ispace,bspace,col;
	int i,j,k;
	cin>>rows;
	nspace=0;
	ispace=rows+1;
	bspace=1;
	for(i=0;i<rows;i++)
	{
		col=0;
		for(j=0;j<nspace;j++,col++)
		cout<<" ";//nspace printing
		if(col<len)
		cout<<str[col++];//first time printing 
		else
		cout<<" ";
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			cout<<" ";//ispace 1
			if(col<len)
			cout<<str[col++];//second time printing
			else
			cout<<" ";
		}
		if(i!=0)
		{
			for(j=0;j<bspace;j++,col++)
				cout<<" ";
			cout<<str[col++];
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++,col++)
			cout<<" ";
			if(col<len)
			cout<<str[col++]<<endl;
			else
			cout<<" "<<endl;
		}
		nspace++;
		if(i!=0)
		bspace+=2;	
		ispace-=2;		
	}
	return 0;
}
