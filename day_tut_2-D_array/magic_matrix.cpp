#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}	
	}
	int previous_sum=0;
	int current_sum=0;
	for(i=0;i<n;i++)
	{
		current_sum=0;
		for(j=0;j<n;j++)
		{
			current_sum+=a[i][j];
		}
		
		if(i==0)
		{
			previous_sum=current_sum;
		}
		else
		{
			if(current_sum!=previous_sum)
			{
				cout<<previous_sum<<" "<<current_sum<<endl;
				cout<<"not a magic matrix iteration 1"<<endl;
				return 0;		
			}
		}
	}
	for(i=0;i<n;i++)
	{
		current_sum=0;
		for(j=0;j<n;j++)
		{
			current_sum+=a[j][i];
		}
		
		if(current_sum!=previous_sum)
		{
			cout<<previous_sum<<" "<<current_sum<<endl;
			cout<<"not a magic matrix iteration 2"<<endl;
			return 0;		
		}
	}
	current_sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				current_sum+=a[i][j];
			}
		}
	}
	if(current_sum!=previous_sum)
		{
			cout<<previous_sum<<" "<<current_sum<<endl;
			cout<<"not a magic matrix iteration 3"<<endl;
			return 0;
		}
	int temp=n-1;
	current_sum=0;
	for(i=0;i<n;i++)
	{
		current_sum+=a[temp--][i];
	}
	if(current_sum!=previous_sum)
	{
		cout<<"not a magic matrix iteration 4"<<endl;
		return 0;
	}
	cout<<"magic matrix"<<endl;
	return 0;
}
