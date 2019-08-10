#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	int i,j,k;
	char str[100];
	cin>>str;
	i=0;
	int count_dot=0;
	int count_e=0;
	int count_sign=0;
	int index_dot=0;
	int index_e=0;
	while(str[i]!='\0')
	{
		if(str[i]=='.')
		{
			index_dot=i;
			count_dot++;
		}
		if(str[i]=='e')
		{
			index_e=i;
			count_e++;
		}
		if(str[i]=='-')
		{
			count_sign++;
		}
		i++;
	}
	if(count_dot>1||count_e>1)
	{
		cout<<"invalid number"<<endl;
		return 0;
	}
	if((count_dot==1)&&(count_e==1)&&(index_dot>index_e))
	{
		cout<<"invalid number"<<endl;
		return 0;
	}
	cout<<"valid"<<endl;
	return 0;
}
