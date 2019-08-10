#include<bits/stdc++.h>
using namespace std;
void generate(char str[],int start,int last,int size,char oper[])
{
	int i;
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	for(i=0;i<size;i++)
	{
		str[start]=oper[i];
		generate(str,start+2,last,size,oper);
	}
	return;
}
int main()
{
	int i,j,k;
	char str[6];
	int size;
	cout<<"size of operators"<<"\n";
	cin>>size;
	char oper[size+1];
	for(i=0;i<size;i++)
	cin>>oper[i];
	oper[size]='\0';
	str[5]='\0';
	str[0]='1';
	str[2]='2';
	str[4]='3';
	generate(str,1,5,size,oper);
	return 0;
}
