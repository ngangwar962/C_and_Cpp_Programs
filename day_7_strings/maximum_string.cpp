#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char str[1000];
	cin>>str;
	int count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	int max=0,index=0;
	for(i=0;i<26;i++)
	{
		//cout<<count[i]<<endl;
		if(count[i]>max)
		{
				max=count[i];
				index=i;
		}
	}
	char temp=index+'A';
	cout<<temp<<endl;
	return 0;
}
