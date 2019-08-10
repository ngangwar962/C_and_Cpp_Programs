#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	string str[n];
	int temp=0;
	for(i=0;i<n;i++)
	{
		cin>>str[i];
		for(j=0;j<str[i].length();j++)
		{
			temp=temp^(str[i][j]-'0');
		}
	}
	if(temp!=0)
	{
		cout<<"-1"<<"\n";
		return 0;
	}
	int mini=10000;
	for(i=0;i<n;i++)
	{
		//cout<<i<<"th rotation "<<"\n";
		int count=0;
		unordered_set<string> set;
		set.insert(str[i]);
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				int len=str[j].length();
				int rotate=0;
				while(rotate<len)
				{
					string st="";
					for(k=rotate;k<len;k++)
					{
						st=st+str[j][k];
					}
					for(k=0;k<rotate;k++)
						st=st+str[j][k];
					//cout<<rotate<<" th rotation "<<st<<"\n";
					//cout<<st<<"\n";
					if(set.find(st)!=set.end())
					{
						//cout<<"rotation= "<<rotate<<"\n";
						count=count+rotate;
						//cout<<count<<"\n";
						break;
					}
	`
					rotate++;
				}
			}	
		}
		//cout<<count<<"\n";
		if(mini>count)
		mini=count;
	}
	cout<<mini<<"\n";
	return 0;
}
