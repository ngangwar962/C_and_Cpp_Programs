#include<iostream>
#include<string.h>
using namespace std;
void append(char *outs,char position)
{
	outs[strlen(outs)]=position;
	outs[strlen(outs)+1]='\0';
	return;
	
}
void powerset(char str[],int position,int length,string outs="")
{
	if(position==length)
	{
		cout<<outs<<endl;
		return;
	}
	powerset(str,position+1,length,outs);
	//append(temp,str[position]);
	//cout<<"inside "<<str[position]<<endl;
	powerset(str,position+1,length,outs+str[position]);
	return;
}
int main()
{
	char str[]="abc";
	powerset(str,0,3);
	return 0;
}
