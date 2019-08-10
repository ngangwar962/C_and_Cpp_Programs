#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str1[100],str2[100];
	cin>>str1>>str2;
	int len1=strlen(str1);
	int len2=strlen(str2);
	i=0;
	j=0;
	int flag=0;
	while((str2[j]!='\0')&&(str1[j]!='\0'))
	{
		if(str1[i]==str2[j])
		{
			j++;
			i++;
			if(j==len2)
			{
				flag=1;
				cout<<i-len2<<endl;
				break;
			}
		}
		else
		{
			j=0;
			i++;
		}
	}
	if(flag==0)
	{
		cout<<"null"<<endl;
	}
	return 0;
}
