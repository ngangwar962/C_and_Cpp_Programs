#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,h,l,point;
	char str[100];
	
	cin>>str;
	int count1=0;
	int count_temp=0;
	int len=strlen(str);
	for(k=0;k<len;k++)
	{
		point=k;	
		for(i=0;i<len-k;i++)
		{
			point=k;
			char temp[100];
			int count=0;
			for(j=0;j<=i;j++,point++)
			{
				temp[count++]=str[point];
			}
			temp[count]='\0';
			cout<<temp<<endl;
			count_temp++;	
		}
	}
	/*for(i=0;i<count_temp;i++)
	cout<<str1[i]<<endl;*/
	return 0;
}
