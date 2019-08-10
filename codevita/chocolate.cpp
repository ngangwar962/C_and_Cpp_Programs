#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k,min_l,max_l,min_w,max_w;
	long int count=0;
	cin>>min_l>>max_l>>min_w>>max_w;
	for(i=min_l;i<=max_l;i++)
	{
		for(j=min_w;j<=max_w;j++)
		{
			int a=i,b=j;
			while(a!=b)
			{
				if(a>b)
				{
					a=a-b;
					count++;
				}
				else
				{
					b=b-a;
					count++;
				}
			}
			if(a==b)
			count++;
		}
	}
	cout<<count;
	cout<<"\n";
	return 0;
}
