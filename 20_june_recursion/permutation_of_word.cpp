#include<iostream>
#include<string.h>
using namespace std;
void permute(char a[],int l,int r)
{
	int i;
	if(l==r)
	{
		cout<<a<<endl;
		return;
	}
	for(i=l;i<r;i++)
	{
		swap(a[l],a[i]);
		permute(a,l+1,r);
		swap(a[l],a[i]);
	}
	return;
}
int main()
{
	char str[100];
	cin>>str;
	int len=strlen(str);
	permute(str,0,len);
	return 0;
}
