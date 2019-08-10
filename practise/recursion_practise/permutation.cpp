#include<iostream>
#include<string.h>
using namespace std;
void permute(char str[],int start,int end)
{
	int i;
	if(start==end)
	{
		cout<<str<<endl;
		return;
	}
	/*if(str[start]==str[start+1])
	return;*/
	for(i=start;i<end;i++)
	{
			swap(str[start],str[i]);
			//if(str[start+1]!=str[start])
			permute(str,start+1,end);
			swap(str[start],str[i]);
	}
	return;
}
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	cout<<"possible permutations are as follows: "<<endl;
	int len=strlen(str);
	permute(str,0,len);
	return 0;
}
