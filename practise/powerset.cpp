#include<bits/stdc++.h>
using namespace std;
void powerset(string str,int start,int last,string outs="")
{
	if(start==last)
	{
		cout<<outs<<"\n";
		return;
	}
	powerset(str,start+1,last,outs);
	powerset(str,start+1,last,outs+str[start]);
	return;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	powerset(str,0,len);
	return 0;
}
