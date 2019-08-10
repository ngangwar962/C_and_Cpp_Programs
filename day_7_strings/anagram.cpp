#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char str1[1000],str2[1000];
	cin>>str1>>str2;
	int count1[26]={0};
	int count2[26]={0};
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		count1[str1[i]-'a']++;	
	}
	for(i=0;i<len2;i++)
	{
		count2[str2[i]-'a']++;
	}
	
	for(i=0;i<len1;i++)
	{
		if(count1[i]!=count2[i])
		{
			cout<<"not a anagram"<<endl;
			return 0;
		}	
	}
	cout<<"anagram"<<endl;
	return 0;
}
