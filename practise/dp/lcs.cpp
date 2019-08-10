#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n1,n2;
	string str2;
	string str4;
	cin>>str2>>str4;
	n1=str2.length();
	n2=str4.length();
	char str1[n1+2];
	char str3[n2+2];
	str1[0]='0';
	str3[0]='0';
	i=0;
	int count=1;
	while(str2[i]!='\0')
	{
		str1[count++]=str2[i];
		i++;
	}
	str1[count]='\0';
	count=1;
	i=0;
	while(str4[i]!='\0')
	{
		str3[count++]=str4[i];
		i++;
	}
	str3[count]='\0';
	cout<<str1<<"\n"<<str3<<"\n";
	int a[n1+1][n2+1];
	for(i=0;i<=n2;i++)
	a[0][i]=0;
	for(i=0;i<=n1;i++)
	a[i][0]=0;
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			if(str1[i]==str3[j])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
			a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	cout<<a[n1][n2]<<"\n";
	return 0;
}
