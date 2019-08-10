#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,t;
	cin>>t;
	int flag=0;
	while(t)
	{
		int n;
		cin>>n;
		int r[n],min[n],max[n],timing[n];
		char rating[n][100],color[n][100];
		for(i=0;i<n;i++)
		{
			cin>>r[i]>>min[i]>>max[i]>>timing[i]>>rating[i]>>color[i];
		}
		cout<<"wait"<<endl;
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				flag=0;
				if(!((r[i]>min[j])&&(r[i]<max[j])))
				{
					flag=1;
					continue;
				}
				else
				{
					if(timing[i]!=timing[j])
					{
						flag=1;
						continue;
					}
					else
					{
						if(!strcmp(rating[i],rating[j])==0)	
						{
							flag=1;
							continue;
						}
						else
						{
					        if((color[i][0]=='r')&&(color[i][0]==color[j][0]))
					        {
					        	flag=0;
						}
						else if((color[i][0]=='w')&&(color[j][0]=='b'))
						{
							flag=0;
						}
						else if((color[i][0]=='b')&&(color[j][0]=='w'))
						{
							flag=0;
						}
						else
						{
							flag=1;
						}
						}
					}
				}
				if(flag==0)
				{
					cout<<j<<endl;
					break;
				}
			}
			if(flag==1)
			cout<<"wait"<<endl;
		}
		t--;
		}
		return 0;
}
