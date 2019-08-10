#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str[1000];
	cin>>str;
	i=0;
	int len=strlen(str);
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]>='0'&&str[i]<='9')
		count++;
		i++;
	}
	cout<<count<<endl;
	return 0;
}
