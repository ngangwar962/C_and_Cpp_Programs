#include<iostream>
#include<math.h>
using namespace std;
static int count=0;
void gstring(char *s,int start,int last)
{
	int i;
	if(start==last)
	{
		int j;
		int temp=last-1;
		long int digit=0;
		for(j=0;j<last;j++,temp--)
		{
			if(s[j]>='1'&&s[j]<='9')
			{
				digit+=pow(10,temp)*(s[j]-'0');
			}
		}
		if(digit%7==0)
		{
			count++;
			//cout<<digit<<endl;
		}
		return;
	}
	for(i=1;i<=9;i++)
	{
		s[start]='0'+i;
		gstring(s,start+1,last);
	}
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k);
	cout<<"count= "<<count<<endl;
	return 0;
}
