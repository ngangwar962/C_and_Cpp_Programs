#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	bool arr[n]={0};
	arr[2]=0;
	for(i=2;i*i<=n;i++)
	{
		if(arr[i]!=1)
		{
			for(j=2;i*j<=n;j++)
			{
				arr[i*j]=1;
			}
		}
	}
	for(i=2;i<=n;i++)
	{
		if(!arr[i])
		{
			cout<<i<<" ";
		}
	}
	int a[3][3];
	cout<<"enter the entries of a"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	int row_count[3]={0};
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==1)
			{
				row_count[count]+=1;
			}
			else if(arr[a[i][j]])
			{
				for(k=a[i][j];k<=n;k++)
				{
					if(!arr[k])
					{
						row_count[count]+=abs(a[i][j]-k);
						break;
					}
				}	
			}
		}
		count++;
	}
	int col_count[3]={0};
	count=0;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			if(a[i][j]==1)
			{
				col_count[count]+=1;
			}
			else if(arr[a[i][j]])
			{
				for(k=a[i][j];k<=n;k++)
				{
					if(!arr[k])
					{
						col_count[count]+=abs(a[i][j]-k);
						break;
					}
				}
			}
		}
		cout<<col_count[count]<<endl;
		count++;
	}
	int min=10000;
	for(i=0;i<3;i++)
	{
		if(row_count[i]<min)
		{
			min=row_count[i];
		}
	}
	for(j=0;j<3;j++)
	{
		if(col_count[j]<min)
		{
			min=col_count[j];
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<row_count[i]<<" ";
	}
	cout<<endl;
	for(j=0;j<3;j++)
	{
		cout<<col_count[j]<<" ";
	}
	cout<<endl;
	cout<<min<<endl;
	return 0;
}
