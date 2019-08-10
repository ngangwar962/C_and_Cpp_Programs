#include<iostream>
#include<string.h>
using namespace std;
int distinct_check(char str[],int len)
{
	int count[26]={0};
	int i;
	for(i=0;i<len;i++)
	{
		count[str[i]-'a']++;
	}
	for(i=0;i<len;i++)
	{
		if(count[i]>1)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,j,k,l;
	char str[1000];
	cin>>str;
	int len=strlen(str);
	int point=0;
	int max=1;
	for(k=0;k<len;k++)
	{
		for(i=0;i<len-k;i++)
		{
			point=k;
			char temp[100];
			for(j=0;j<=i;j++)
			{
				temp[j]=str[point++];
			}
			temp[j]='\0';
			//cout<<temp<<endl;
			int value=distinct_check(temp,strlen(temp));
			if(value==1)
			{
				cout<<temp<<endl;
				if(strlen(temp)>max)
				{
					max=strlen(temp);
				}
			}
		}
	}
	cout<<max<<endl;
	return 0;
}
