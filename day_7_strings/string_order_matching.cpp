#include<iostream>
#include<string.h>
using namespace std;
bool order_check(char str[],char a,char b)
{	
	int i,j,k,len;
	len=strlen(str);
	int end=0,start=0;
	//cout<<a<<" "<<b<<endl;
	for(i=0;i<len;i++)
	{
		if(str[i]==a)
		{
			end=i;
		}
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==b)
		{
			start=i;
			break;
		}
	}
	if(start>end)
	return true;
	else
	return false;
}
int main()
{
	int i,j,k,l;
	int turn=0;
	char str[100];	
	cout<<"enter the string"<<endl;
	cin>>str;
	cout<<"enter the order"<<endl;
	char order[100];
	cin>>order;
	int len=strlen(order);
	int count1=0,count2=1;
	while(count2<len)
	{
		bool flag=order_check(str,order[count1],order[count2]);
		if(flag==0)
		{
			cout<<"order not maintained"<<endl;
			return 0;
		}
		count1++;
		count2++;
	}
	cout<<"order maintained"<<endl;
	return 0;
}
