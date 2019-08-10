#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int rows,cols;
	cin>>rows>>cols;
	int a[rows+1][cols+1];
	int result[rows+1][cols+1];
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			cin>>a[i][j];	
		}
	}
	/*for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}*/
	
	for(i=1;i<=rows;i++)
	{
		int count=0;
		for(j=1;j<=cols;j++)
		{
			if(a[i][j]==0)
			result[i][j]=0;
			else
			{
				count=0;
				if((i==1)&&(j==1))//first element
				{
					/*if(a[i][j+1]==1)
					count++;
					if(a[i+1][j]==1)
					count++;
					if(a[i+1][j+1]==1)
					count++;*/
					result[1][1]=1;
					continue;
				}
				if((i==1)&&(j==cols))//first row last column
				{
					if(a[i][j-1]==1)
					count++;
					if(a[i+1][j-1]==1)
					count++;
					if(a[i+1][j]==1)
					count++;
				}
				if((i==rows)&&(j==1))//last row first column
				{
					if(a[i-1][j]==1)
					count++;
					if(a[i-1][j+1]==1)
					count++;
					if(a[i][j+1]==1)
					count++;
				}
				if((i==rows)&&(j==cols))//last row last col
				{
					if(a[i-1][j]==1)
					count++;
					if(a[i][j-1]==1)
					count++;
					if(a[i-1][j-1]==1)
					count++;
				}
				if((i==1)&&(!((j==1)||(j==cols))))//first row no extreme col
				{
					if(a[i][j-1]==1)
					count++;
					if(a[i+1][j-1]==1)
					count++;
					if(a[i+1][j]==1)
					count++;
					if(a[i+1][j+1]==1)
					count++;
					if(a[i][j+1])
					count++;
				}
				if((i==rows)&&(!((j==1)||(j==cols))))//last row no extreme col
				{
					if(a[i][j-1])
					count++;
					if(a[i-1][j-1])
					count++;
					if(a[i-1][j])
					count++;
					if(a[i-1][j+1])
					count++;
					if(a[i][j+1])
					count++;
				}
				if(((i!=1)&&(i!=rows))&&(j==1))//no extreme row and first col
				{
					if(a[i-1][j])
					count++;
					if(a[i-1][j+1])
					count++;
					if(a[i][j+1])
					count++;
					if(a[i+1][j+1])
					count++;
					if(a[i+1][j])
					count++;
				}
				if(((i!=1)&&(i!=rows))&&(j==cols))//no extreme row and last col
				{
					if(a[i-1][j])
					count++;
					if(a[i-1][j-1])
					count++;
					if(a[i][j-1])
					count++;
					if(a[i+1][j-1])
					count++;
					if(a[i+1][j])
					count++;
				}
				if((i>1&&i<rows)&&(j>1&&j<cols))//intermediate elements
				{
					if(a[i-1][j])
					count++;
					if(a[i-1][j-1])
					count++;
					if(a[i][j-1])
					count++;
					if(a[i+1][j-1])
					count++;
					if(a[i+1][j])
					count++;
					if(a[i+1][j+1])
					count++;
					if(a[i][j+1])
					count++;
					if(a[i-1][j+1])
					count++;
				}
				result[i][j]=count;
			}
		}
	}
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	int distance=0;
	int disx=0,disy=0;
	int maximum=0;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			if(i==1&&j==1)
			continue;
			if(result[i][j]>maximum)
			{
				maximum=result[i][j];
				disx=i;
				disy=j;
				distance=(disx-1)+(disy-1);
				continue;
			}
			else if(result[i][j]==maximum)
			{
				int temp=(i-1)+(j-1);
				if(temp<distance)
				{
					maximum=result[i][j];
					disx=i;
					disy=j;
				}
			}
		}
	}
	cout<<disx<<":"<<disy<<":"<<maximum<<endl;
	return 0;
}
