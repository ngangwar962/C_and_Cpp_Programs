#include<iostream>
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
		//cout<<str[start]<<" "<<str[i]<<"\n";
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
	int i,k,j,l;
	string str;
	cin>>str;
	int len=str.length();
	permutation(str,0,len);
	return 0;
}
