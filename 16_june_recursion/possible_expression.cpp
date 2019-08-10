#include<iostream>
using namespace std;
char str[1000];
char oper[2]={'+','-'};
void gstring(char *temp,int start,int end)
{
	int i,j;
	if(start==end)
	{
		cout<<temp<<endl;
		return;
	}
	for(i=0;i<2;i++)
	{
		temp[start]=oper[i];
		gstring(temp,start+2,end);	
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char temp[k+1];
	cin>>temp;
	int count=0;
	for(i=0;i<2*k-1;i+=2,count++)
	{
		str[i]=temp[count];
	}
	str[i-1]='\0';
	gstring(str,1,2*k-1);
	return 0;
}
