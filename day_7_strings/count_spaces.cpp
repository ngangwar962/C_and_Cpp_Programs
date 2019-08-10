#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	//gets(str);
	getline(cin,str);
	i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]==(char)32)
		{
			count++;
		}
	i++;
	}
	cout<<"no. of words= "<<count+1<<endl;
	return 0;
}
