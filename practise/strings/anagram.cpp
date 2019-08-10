#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	i=0;
	int count1[26]={0};
	int count2[26]={0};
	while(str1[i]!='\0')
	{
		count1[str1[i]-'a']++;
		i++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		count2[str2[i]-'a']++;
		i++;
	}
	int flag=0;
	for(i=0;i<26;i++)
	{
		if(count1[i]!=count2[i])
		{
			flag=1;
			cout<<"NO"<<"\n";
			return 0;
		}
	}
	cout<<"YES"<<"\n";
	return 0;
}
