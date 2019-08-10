#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int arr[MAX];
 	     // 0   1   2     3     4     5     6     7      8     9
string phone[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void gstring(char str[],int start,int last)
{
	int i;
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	for(i=0;i<phone[arr[start]].length();i++)
	{
	str[start]=phone[arr[start]][i];
	gstring(str,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	for(i=0;i<k;i++)
	{
		cin>>arr[i];
	}
	str[k]='\0';
	gstring(str,0,k);
	return 0;
}
