#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	string str;
	cin>>str;
	int len=str.length();
	int count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	int odd_count=0,even_count=0;
	for(i=0;i<26;i++)
	{
		if(count[i])
		{
			if(count[i]%2)
			odd_count++;
			else
			even_count++;	
		}
	}
	if(odd_count==0&&even_count>0)
	{
		cout<<"Yes"<<"\n";
	}
	else if(odd_count==1&&even_count>=0)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	//cout<<even_count<<" "<<odd_count<<"\n";
	return 0;
}
