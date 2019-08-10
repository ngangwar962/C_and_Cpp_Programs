#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	int sum[8]={0};
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>a[i][j];
	int change_sum=0;
	int count=0;
	int temp=0;
	for(i=0;i<n;i++,count++)
	{
		for(j=0;j<m;j++)
		{
			sum[count]+=a[i][j];
		}
		temp=0;
		if(sum[count]>15)
		{
			temp=sum[count]-15;
			if(a[i][0]>temp)
			a[i][0]=a[i][0]-temp;
			else if(a[i][1]>temp)
			a[i][1]=a[i][1]-temp;
			else
			a[i][2]=a[i][2]-temp;
		}	
		sum[count]=sum[count]-temp;
		//cout<<count<<"-"<<sum[count]<<endl;
	}
	for(i=0;i<m;i++,count++)
	{
		for(j=0;j<n;j++)
		{
			sum[count]+=a[j][i];
		}
		temp=0;
		if(sum[count]>15)
		{
			temp=sum[count]-15;
			if(a[0][i]>temp)
			a[0][i]=a[0][i]-temp;
			else if(a[1][i]>temp)
			a[1][i]=a[1][i]-temp;
			else
			a[2][i]=a[2][i]-temp;
		}	
		sum[count]=sum[count]-temp;
		//cout<<count<<"-"<<sum[count]<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum[count]+=a[i][i];
	}
	temp=0;
	if(sum[count]>15)
	{
		temp=sum[count]-15;
		if(a[0][0]>temp)
		a[0][0]=a[0][0]-temp;
		else if(a[1][1]>temp)
		a[1][1]=a[1][1]-temp;
		else
		a[2][2]=a[2][2]-temp;
	}
	sum[count]=sum[count]-temp;
	//cout<<count<<"-"<<sum[count]<<endl;
	count++;
	for(i=0;i<n;i++)
	{
		sum[count]+=a[n-i-1][i];
	}
	temp=0;
	if(sum[count]>15)
	{
		temp=sum[count]-15;
		if(a[2][0]>temp)
		a[2][0]=a[2][0]-temp;
		else if(a[1][1]>temp)
		a[1][1]=a[1][1]-temp;
		else
		a[0][2]=a[0][2]-temp;
	}
	sum[count]=sum[count]-temp;
	//cout<<count<<"-"<<sum[count]<<endl;
	if((sum[0]==sum[3])&&(sum[0]<15))
	{
		int temp=15-sum[0];
		sum[0]=sum[0]+temp;
		sum[3]=sum[0];
		change_sum+=temp;
	}
	else if((sum[0]==sum[4])&&(sum[0]<15))
	{
		int temp=15-sum[0];
		sum[0]+=temp;
		sum[4]=sum[0];
		change_sum+=temp;
	}
	else if((sum[0]==sum[5])&&(sum[0]<15))
	{
		int temp=15-sum[0];
		sum[0]+=temp;
		sum[5]=sum[0];
		change_sum+=temp;
	}
	if((sum[3]==sum[1])&&(sum[3]<15))
	{
		int temp=15-sum[3];
		sum[0]+=temp;
		sum[5]=sum[0];
		change_sum+=temp;
	}
	else if((sum[1]==sum[4])&&(sum[1]<15))
	{
		int temp=15-sum[1];
		sum[1]+=temp;
		sum[4]=sum[1];
		change_sum+=temp;
	}
	else if((sum[5]==sum[1])&&(sum[5]<15))
	{
		int temp=15-sum[5];
		sum[5]+=temp;
		sum[1]=sum[5];
		change_sum+=temp;
	}
	if((sum[3]==sum[2])&&(sum[3]<15))
	{
		int temp=15-sum[3];
		sum[3]+=temp;
		sum[2]=sum[3];
		change_sum+=temp;
	}
	else if((sum[4]==sum[2])&&(sum[4]<15))
	{
		int temp=15-sum[4];
		sum[4]+=temp;
		sum[2]=sum[4];
		change_sum+=temp;
	}
	else if((sum[5]==sum[2])&&(sum[2]<15))
	{
		int temp=15-sum[5];
		sum[5]+=temp;
		sum[2]=sum[5];
		change_sum+=temp;
		
	}
	cout<<change_sum<<endl;
	return 0;
}
