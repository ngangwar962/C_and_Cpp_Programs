#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	i=1;
	char st1[len1+1];
	st1[0]=str1[0];
	int count=1;
	while(str1[i]!='\0')
	{
		if(str1[i]==str1[i-1])
		{
			i++;
			continue;
		}
		st1[count++]=str1[i];
		i++;
	}
	st1[count]='\0';
	cout<<st1<<"\n";
	char st2[len2+1];
	count=1;
	i=1;
	st2[0]=str2[0];
	while(str2[i]!='\0')
	{
		if(str2[i]==str2[i-1])
		{
			i++;
			continue;
		}
		st2[count++]=str2[i];
		i++;
	}
	st2[count]='\0';
	cout<<st2<<"\n";
	int l1=strlen(st1);
	int l2=strlen(st2);
	if(l1!=l2)
	{
		cout<<"NO"<<"\n";
		return 0;
	}
	else
	{
		int flag=0;
		for(i=0;i<l1;i++)
		{
			if(st1[i]!=st2[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
	}
	return 0;	
}
