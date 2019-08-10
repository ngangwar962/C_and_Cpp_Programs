#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l,n,count;
	int flag=0;
	char str1[1000],str2[1000];
	cin>>str1>>str2;
	int len1=strlen(str1);
	int len2=strlen(str2);
	char str1_new[1000],str2_new[1000];
	i=1;
	count=1;
	str1_new[0]=str1[0];
	for(i=1;i<len1;i++)
	{
		if(str1[i]!=str1[i-1])
		{
			str1_new[count++]=str1[i];
		}
	}
	str1_new[count]='\0';
	count=1;
	str2_new[0]=str2[0];
	for(i=1;i<len2;i++)
	{
		if(str2[i]!=str2[i-1])
		{
			str2_new[count++]=str2[i];
		}
	}
	str2_new[count]='\0';
	len1=strlen(str1_new);
	len2=strlen(str2_new);
	if(len1!=len2)
	{
		cout<<"not in order"<<endl;
		return 0;
	}
	else
	{
		for(i=0;i<len1;i++)
		{
			if(str1_new[i]!=str2_new[i])
			{
				cout<<"not equal"<<endl;
				flag=1;	
				return 0;
			}
		}
	}
	cout<<"strings are in order"<<endl;
	return 0;
}
