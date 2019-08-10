#include<iostream>
using namespace std;
void stars(int cols)
{
	if(cols==0)
	return;
	cout<<"*";
	stars(cols-1);
	return;
}
void pattern(int rows,int cols)
{
	if(rows==0)
	return;
	stars(cols);
	cout<<endl;
	pattern(rows-1,cols+1);
	return;
}
int main()
{
	int i,j,k,rows,cols=1;
	cin>>rows;
	pattern(rows,cols);
	return 0;
}
