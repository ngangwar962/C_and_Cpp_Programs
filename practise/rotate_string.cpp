#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[31];
	int i,j,k;
	char **str1;
	cin>>str;
	int count;
	for(i=0;i<strlen(str);i++)
	{
		count=0;
		for(k=0;k<strlen(str)-i;k++)
		{
			char temp[31];
			int count1=0;
			for(j=i;j<=count;j++)
			{
				temp[count1++]=str[j];
			}
			temp[++count]='\0';
			cout<<temp<<endl;
		}
	}
	return 0;
}
