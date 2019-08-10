#include<iostream>
#include<string.h>
using namespace std;
int check_palindrome(char str[],int len)
{
	int start=0;
	int end=len-1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			return -1;
		}
		start++;
		end--;
	}
	return len;
}
int main()
{
	int i,j,k,l;
	char str[100];
	cin>>str;
	int len=strlen(str);
	int count=0,count1=0;
	int index=0;
	int temp_len=0;
	int max=1;
	for(k=0;k<len;k++)
	{
		for(i=0;i<len-k;i++)
		{
			index=k;
			char temp[100];
			for(j=0;j<=i;j++,index++)
			{
				temp[j]=str[index];
			}
			temp[j]='\0';
			cout<<temp<<endl;
			temp_len=strlen(temp);
			if(temp_len==1)
			{
				continue;
			}
			else
			{
				int value=check_palindrome(temp,strlen(temp));
				if(value>max)
				max=value;
			}
		}
	}
	cout<<"maximum="<<max<<endl;
	return 0;
}
