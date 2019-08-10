#include<iostream>
using namespace std;
void permute(char str[],int start,int last)
{
	int i;
	if(start==last)
	{
		int flag=0;
		for(i=0;i<last-1;i++)
		{
			if((str[i+1]-'0'-1)==(str[i]-'0'))
			{
			flag=1;
			break;
			}
		}
		if(flag==0)
		cout<<str<<endl;
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(str[start],str[i]);
		permute(str,start+1,last);
		swap(str[start],str[i]);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	for(i=0;i<k;i++)
	str[i]=i+1+'0';
	str[i]='\0';
	permute(str,0,k);
	return 0;
}
