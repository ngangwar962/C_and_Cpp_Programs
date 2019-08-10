#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int sq=sqrt(n);
	i=2;
	int flag=0;
	int power=1;
	while(i<=n)
	{
		int count=0;
		while(n%i==0)
		{
			count++;
			n/=i;
		}
		if(count)
		{
			if(i==2)
			{
			cout<<i<<"^"<<count<<" + ";
			}
			else
			{
				int sq1=sqrt(i);
				flag=0;
				for(j=2;j<=sq1;j++)
				{
					if(i%j==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				cout<<i<<"^"<<count<<" + ";
			}
			power=power*(count+1);
		}
		i++;	
	}
	cout<<"\n";
	cout<<power<<"\n";
	return 0;
}
