#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int L[len][len];
	for(i=0;i<len;i++)
	{
		L[i][i]=1;
	}
	for(int num=2;num<=len;num++)
	{
		for(i=0;i<len-num+1;i++)
		{
			j=i+num-1;
			if(str[i]==str[j]&&num==2)
			{
				L[i][j]=2;
			}
			else if(str[i]==str[j])
			{
				L[i][j]=L[i+1][j-1]+2;
			}
			else
			{
				L[i][j]=max(L[i][j-1],L[i+1][j]);
			}
		}
	}
	cout<<L[0][len-1]<<"\n";
	int l=L[0][len-1];
	if(l==2)
	{
		cout<<"Prime"<<"\n";
		return 0;
	}
	if(l<=1)
	{
		cout<<"Non-Prime"<<"\n";
		return 0;
	}
	int sq=sqrt(l);
	int flag=0;
	cout<<"checking in function"<<"\n";
	for(i=2;i<=sq;i++)
	{
		if(l%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Non-Prime"<<"\n";
		return 0;
	}
	else
	{
		cout<<"Prime-Number"<<"\n";
		return 0;
	}
	return 0;
}
