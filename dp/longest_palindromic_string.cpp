#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int l[len][len];
	for(i=0;i<len;i++)
	l[i][i]=1;
	int num;
	for(num=2;num<=len;num++)
	{
		for(i=0;i<len-num+1;i++)
		{
			j=i+num-1;
			if(str[i]==str[j]&&num==2)
			l[i][j]=2;
			else if(str[i]==str[j])
			l[i][j]=l[i+1][j-1]+2;
			else
			l[i][j]=max(l[i+1][j],l[i][j-1]);
		}
	}
	cout<<l[0][len-1]<<"\n";
	return 0;
}
