#include<bits/stdc++.h>
using namespace std;
char st1[1000];
	//	0  1   2     3      4    5     6      7      8     9	
string phone[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate(int a[],int start,int last)
{
	//cout<<"in the function"<<"\n";
	int i;
	if(start==last)
	{
		st1[last]='\0';
		cout<<st1<<"\n";
		return;
	}
	//cout<<a[0]<<"\n";
	int len=phone[a[start]].length();
	//cout<<len<<"\n";
	for(i=0;i<len;i++)
	{
		st1[start]=phone[a[start]][i];
		//cout<<st1[start]<<" "<<phone[a[start]][i]<<"\n";
		generate(a,start+1,last);
	}
}
int main()
{
	int i,j,k;
	cin>>k;
	int a[k];
	for(i=0;i<k;i++)
	cin>>a[i];
	//cout<<"done"<<"\n";
	generate(a,0,k);
	return 0;
}
