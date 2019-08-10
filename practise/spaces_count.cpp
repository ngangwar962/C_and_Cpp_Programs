#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,n;
	string str;
	getline(cin,str);
	i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]==(char)32&&i!=0&&str[i-1]!=(char)32)
		count++;
		i++;	
	}
	cout<<count<<endl;
	return 0;
}
