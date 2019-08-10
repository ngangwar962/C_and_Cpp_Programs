#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	int n,sum;
	cin>>n>>sum;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	unordered_set<int> s;
	int flag=0;
	/*for(i=0;i<n;i++)
	{
		int temp=sum-a[i];
		if(check(temp,s))
		{
			flag=1;
			cout<<a[i]<<" "<<temp<<"\n";
			break;
		}
		s.insert(a[i]);
	}
	if(flag==0)
	{
		cout<<"-1"<<"\n";
		return 0;
	}*/
	return 0;
}
