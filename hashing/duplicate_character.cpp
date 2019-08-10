#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]>1)
		{
			char temp=97+i;
			cout<<temp;
		}
	}
	cout<<"\n";
	return 0;
}
