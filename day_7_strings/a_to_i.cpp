#include<iostream>
using namespace std;
int myatoi(char str[])
{
	int i=0;
	int value=0;
	while(str[i]!='\0')
	{
		//int temp=str[i];
		if(str[i]>='0'&&str[i]<='9')
		{
			value=value*10+str[i]-'0';
		}
		else
		{
			return -1;
		}
		i++;
	}
	return value;
}
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	cout<<myatoi(str)<<endl;
	return 0;
}
