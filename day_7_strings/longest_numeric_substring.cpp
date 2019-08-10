#include<iostream>
#include<string.h>
using namespace std;
int check_string(char temp[],int len)
{
	int i=0;
	int count=0;
	while(temp[i]!='\0')
	{
		if(temp[i]>='0'&&temp[i]<='9')
		{
			count++;
		}
		else
		{
			return -1;
		}
		i++;
	}
	return count;
}
int main()
{
	int i,j,k;
	char fstr[100];
	char str[100];
	cin>>str;
	int count=0;
	int len=strlen(str);
		int max=0;
	for(k=0;k<len;k++)
	{
	for(i=0;i<len-k;i++)
	{
		count=k;
		char temp[100];		
		for(j=0;j<=i;j++)
		{
			temp[j]=str[count++];
		}
		temp[j]='\0';
		//cout<<temp<<endl;
		int value=check_string(temp,strlen(temp));
		if(value>max)
		{
			max=value;
			int y=0;
			while(temp[y]!='\0')
			{
				fstr[y]=temp[y];
				y++;
			}
			fstr[y]='\0';	
		}
	}
	}
	cout<<fstr<<endl;
	return 0;
}
