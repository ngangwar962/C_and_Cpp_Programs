#include<iostream>
using namespace std;
int main()
{
	int i,j,l,k;
	string str;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i;j++)
		{
			int pointer=i;
			char st[1000];
			for(k=0;k<=j;k++)
			{
				st[k]=str[pointer];
				pointer++;
			}
			st[k]=0;
			cout<<st<<"\n";
		}
	}
	return 0;
}
