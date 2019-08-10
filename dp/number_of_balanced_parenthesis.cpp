#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int lvs[len]={0};
	for(i=1;i<len;i++)
	{
		if((str[i]==')')&&(i-lvs[i-1]-1>=0)&&(str[i-lvs[i-1]-1]=='('))
		{
			lvs[i]=lvs[i-1]+2;
		}
		else if((i-lvs[i-1]-2)>=0)
		{
			lvs[i]=lvs[i]+lvs[i-lvs[i-1]-2];
		}
	}
	int length_max=0;
	for(i=0;i<len;i++)
	length_max=max(length_max,lvs[i]);
	cout<<length_max<<"\n";
	return 0;
}
