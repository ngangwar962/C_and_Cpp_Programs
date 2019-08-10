#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<int> st;
	int i,j,k,n;
	cin>>n;
	int a[n];
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		st.insert(temp);
	}
	unordered_set<int>::iterator it;
	int max1=0;
	int max2=0;
	if(st.size()==1)
	{
		it=st.begin();
		cout<<"0"<<"\n";
		return 0;
	}
	for(it=st.begin();it!=st.end();it++)
	{
		if(*it>max1)
		{
			max2=max1;
			max1=*it;
		}
		else if(*it>max2&&*it<max1)
		{
			max2=*it;
		}
	}
	cout<<max2<<"\n";
	return 0;
}
