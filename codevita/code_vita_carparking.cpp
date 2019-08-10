#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int l,m,s;
	cin>>l>>m>>s;
	int index;
	string size,arrival,departure;
	long int total=0;
	vector<vector<int> > v[n];
	for(i=0;i<n;i++)
	{
		cin>>index>>size>>arrival>>departure;
		vector<int> temp;
		temp
		v[i].push_back(
	}
	for(i=0;i<n;i++)
	{
		if(arrival=="00")
		arrival="24";
		if(departure=="00")
		departure="24";
		if(size[0]=='l'&&l>0)
		{
			if(arrival<departure)
			{
				total=total+(departure-arrival)*100;
			}
			else
			{
				departure=departure+24;
				total=total+(departure-arrival)*100;
			}
		}
		else if(size[0]=='m'&&m>0)
		{
			
		}
		else if(size[0]=='m'&&m==0&&l>
	}
}
