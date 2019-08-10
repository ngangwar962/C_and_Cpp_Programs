#include<iostream>
#include<math.h>
using namespace std;
static int count=0;
int check(string str,int start,int last)
{
	if(last==-1)
	return 0;
	return (str[start]-'0')*pow(10,last)+check(str,start+1,last-1);
}
int main()
{
	int i,j,k,l;
	string str1;
	cin>>str1;
	int len=str1.length();
	for(i=0;i<len;i++)
	{
		for(j=1;j+i<=len;j++)
		{
			string s1=str1.substr(i,j);
			int temp_len=s1.length();
			if(temp_len==1&&s1[0]=='0')
			{
				int value=check(s1,0,temp_len-1);
				if(value%6==0)
				{
					cout<<s1<<"\n";
					count++;
				}
			}
			else if(!(temp_len!=1&&s1[0]=='0'))
			{
				int value=check(s1,0,temp_len-1);
				if(value%6==0)
				{
					cout<<s1<<"\n";
					count++;
				}
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
