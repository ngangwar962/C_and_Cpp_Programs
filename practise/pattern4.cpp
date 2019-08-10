#include<iostream>
using namespace std;
static int count=1;
void stars(int s)
{
	if(s==0)
	return;
	cout<<count<<" ";
	count++;
	stars(s-1);
}
void print(int no_of_times,int rows)
{
	if(no_of_times>rows)
	return;
	stars(no_of_times);
	cout<<endl;
	print(no_of_times+1,rows);
	return;	
}
int main()
{
	int i,j,k,rows;
	cin>>rows;
	print(1,rows);
	return 0;
}
