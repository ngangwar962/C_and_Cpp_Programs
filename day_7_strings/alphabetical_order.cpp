#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char str[1000];
	cin>>str;
	int len=strlen(str);
	char max=str[0];
	for(j=1;j<len;j++)
	{
		if(max<=str[j])
		{
			max=str[j];
			//cout<<max<<endl;	
		}
		else
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}
