#include<bits/stdc++.h>
using namespace std;
void permutation(string str,int start,int last)
{
	int i;
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		if((str[start]!=str[i])||(i==start))
		{
		swap(str[start],str[i]);
		permutation(str,start+1,last);
		swap(str[start],str[i]);
		}
	}
	return;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	cout<<"here are the permutations"<<"\n";
	int len=str.length();
	permutation(str,0,len);
	return 0;
}
