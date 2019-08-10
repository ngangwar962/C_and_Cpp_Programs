#include<iostream>
using namespace std;
int main()
{
	int i,j,k,rows;
	cin>>rows;
	int nspace=0,ispace=rows+1,bspace=1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<nspace;j++)
		cout<<" ";//first nspace
		cout<<"*";//first star
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++)
			cout<<" ";//first ispace
			cout<<"*";
		}
		if(i!=0)
		{
			for(j=0;j<bspace;j++)
			cout<<" ";//bspace printing 
			cout<<"*";
		}
		if(i!=rows-1)
		{
			for(j=0;j<ispace;j++)
				cout<<" ";
			cout<<"*"<<endl;
		}
		nspace++;
		ispace-=2;
		if(i!=0)
		bspace+=2;
	}
	return 0;
}
