#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int i,j,k;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	int a[len1+1][len2+1]={0};
	for(i=0;i<=len1;i++)
	a[0][i]=0;
	for(j=0;j<=len2;j++)
	a[j][0]=0;
	for(i=1;i<=len1;i++)
	{
		for(j=1;j<=len2;j++)
		{
			if(str1[i-1]==str2[j-1])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
	}
	cout<<a[len1][len2]<<"\n";
	return 0;
}
