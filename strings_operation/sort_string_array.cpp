#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
	return s1.size()<s2.size();
}
int main()
{
	int i,j,k;
	string str[]={"hello","dear","how","are","you"};	//string array to be sorted
	sort(str,str+5,compare);	//sorting the string using sort function
	for(i=0;i<5;i++)
	{
		cout<<str[i]<<"\n";
	}
	return 0;
}
