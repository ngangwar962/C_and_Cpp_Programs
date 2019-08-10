#include<iostream>
#include<string.h>
using namespace std;
char num[100];
void reverse(int start,int end)
{
	if(start>=end)
	{
		return;
	}
	else
	{
		char temp;	
		temp=num[start];
		num[start]=num[end];
		num[end]=temp;
	}
	reverse(start+1,end-1);
}
int main()
{
	cin>>num;
	int len=strlen(num);
	int start=0;
	int end=len-1;
	reverse(start,end);
	cout<<num<<endl;
	return 0;
}
