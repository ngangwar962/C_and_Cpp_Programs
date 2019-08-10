#include<iostream>
#include<stack>
#define MAX 10000
using namespace std;
int main()
{
	stack<int> st;
	int i,j,k;
	int n,val;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		st.push(val);
	}
	int min=MAX;
	for(i=0;i<n;i++)
	{
		val=st.top();
		st.pop();
		if(val<min)
		{
			min=val;
		}
	}
	cout<<min<<endl;
	return 0;
}
