#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
void parenthesis(int pos,int n,int open,int close)
{
	//cout<<pos<<" "<<n<<" "<<open<<" "<<close<<" ";
	static char str[MAX];
	if(n==close)
	{
		str[pos+1]='\n';
		cout<<str<<"\n";
		return;
	}
	if(open>close)
	{
		str[pos]='}';
		//cout<<str[pos]<<" ";
		parenthesis(pos+1,n,open,close+1);
	}
	if(open<n)
	{
		str[pos]='{';
		//cout<<str[pos]<<" ";
		parenthesis(pos+1,n,open+1,close);
	}
}
int main()
{
	int i,j,k,n;
	cin>>n;
	parenthesis(0,n,0,0);
	return 0;
}
