#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string s1,s2;
	int len1=s1.length();
	int len2=s2.length();
	cin>>s1>>s2;
	char str1[len1+2],str2[len2+2];
	str1[0]='0';
	str2[0]='0';
	i=0;
	while(s1[i]!='\0')
	{
		str1[i+1]=s1[i];
		i++;
	}
	str1[i+1]='\0';
	cout<<str1<<"\n";
	j=0;
	while(s2[j]!='\0')
	{
		str2[j+1]=s2[j];
		j++;
	}
	str2[j+1]='\0';
	int l1=strlen(str1);
	int l2=strlen(str2);
	cout<<str2<<"\n";
	int a[l1+1][l2+1]={0};
	for(i=1;i<l1;i++)
	{
		for(j=1;j<l2;j++)
		{
			cout<<str1[i]<<" "<<str2[j]<<"\n";
			if(str1[i]==str2[j])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
	}
	cout<<a[l1-1][l2-1]<<"\n";
	return 0;
}
