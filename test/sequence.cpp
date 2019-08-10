#include<iostream>
#include<cstdlib>
using namespace std;
long int n1=0,n2=0;
long int sum=0;
int main()
{
	int i,j,k,l;
	cin>>n1>>n2;	
	int a[n2];
	for(i=0;i<n2;i++)
	cin>>a[i];
	int temp[9];
	int count=8;
	while(n1)
	{
		int n=n1%10;
		n1=n1/10;
		temp[count]=n;
		count--;
	}
	/*for(i=0;i<9;i++)
	cout<<temp[i]<<" ";
	cout<<endl;*/
	int arr1[3][3];
	count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr1[i][j]=temp[count++];
		}
	}
	int present=a[0];
	int indexx1=-1;
	int indexy1=-1;
	int indexx2=-1;
	int indexy2=-1;
	for(i=0;i<n2-1;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[i]==arr1[j][k])
				{
					indexx1=j;
					indexy1=k;
					//cout<<indexx1<<" "<<indexy1<<endl;
				}
			}
		}
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[i+1]==arr1[j][k])
				{
					indexx2=j;
					indexy2=k;
					//cout<<indexx2<<" "<<indexy2<<endl;
				}
			}
		}
		int temp1=abs(indexx1-indexx2);
		int temp2=abs(indexy1-indexy2);
		//cout<<temp1<<temp2<<endl;
		int max_distance=0;
		if(temp1>temp2)
		{
			max_distance=temp1;
		}	
		else
		{
			max_distance=temp2;
		}
		if(max_distance==1)
		{
			sum+=2;
		}
		else if(max_distance==2)
		sum+=4;
		cout<<sum<<endl;
	}
	return 0;	
}
