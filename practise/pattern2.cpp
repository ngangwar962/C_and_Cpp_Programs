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
	pattern(rows-1,cols);
	return;
}
int main()
{
	int rows,cols;
	cin>>rows>>cols;
	pattern(rows,cols);
	return 0;
}
