#include<iostream>
#include<string.h>
using namespace std;
int check_anagram(char s1[],char s2[])
{
	int i,j,k;
	cout<<s1<<" "<<s2<<endl;
	int len1=strlen(s1);
	int len2=strlen(s2);
	int count1[26]={0};
	int count2[26]={0};
	if(len1!=len2)
	return 0;
	else
	{
		i=0;
		while(s1[i]!='\0')
		{
			count1[s1[i]-'a']++;
			i++;
		}
		j=0;
		while(s2[j]!='\0')
		{
			count2[s2[j]-'a']++;
			j++;
		}
		for(i=0;i<26;i++)
		{
			if(count1[i]!=count2[i])
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int i,j,k;
	char str[1000];
	char first_char[1000];
	cout<<"enter the string"<<endl;
	cin>>str;
	int t;
	cout<<"enter the test cases"<<endl;
	cin>>t;
	char s;
	int times;
	int count=0;
	for(i=0;i<t;i++,count++)
	{
		cout<<"enter the side and no of times rotation"<<endl;
		cin>>s>>times;
		int len=strlen(str);
		//cout<<"actual string "<<str<<" ";
		if(s=='L')
		{
			for(k=0;k<times;k++)
			{
				char temp=str[0];
				for(j=1;j<len;j++)
				{
					str[j-1]=str[j];
				}	
				str[len-1]=temp;
			}
		}
		else
		{
			for(k=0;k<times;k++)
			{
				char temp=str[len-1];
				for(j=len-1;j>=1;j--)
				{
					str[j]=str[j-1];
				}
				str[0]=temp;
			}	
		}
		first_char[count]=str[0];
		cout<<str<<endl;
	}
	first_char[count]='\0';
	cout<<first_char<<endl;
	int len=strlen(str);
	int index=0;
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
			int value=check_anagram(temp,first_char);
			//cout<<temp<<endl;
			if(value==1)
			{
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
}
	
