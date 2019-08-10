#include<iostream>
using namespace std;
int main()
{	
	int i,j,k;
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int c[n+m];
	int flag=0;
	cout<<"enter the elements of the first array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the elements of the second array"<<endl;
	for(j=0;j<m;j++)
	cin>>b[j];
	cout<<"input taken"<<endl;
	int count=0;
	i=0;j=0;
	while(i<n&&j<m)
	{
		cout<<i<<" "<<j<<" "<<count<<endl;
		flag=0;
		if(a[i]>b[j])
		{
			if(count==0)
			{
				c[count++]=b[j];
				j++;
				continue;
			}
			for(k=0;k<count;k++)
			{
				if(b[j]==c[k])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				c[count++]=b[j];
			}
			j++;
			continue;
		}
		else if(a[i]<b[j])
		{
			flag=0;
			if(count==0)
			{
				c[count++]=a[i];
				i++;
				continue;
			}
			for(k=0;k<count;k++)
			{
				if(c[k]==a[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				c[count++]=a[i];
			}
			i++;
			continue;
		}
		else if(a[i]==b[j])
		{
			flag=0;
			if(count==0)
			{
				c[count++]=a[i];
				i++;
				j++;
				continue;
			}
			for(k=0;k<count;k++)
			{
				if(c[k]==a[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				c[count++]=a[i];
			}
			i++;
			j++;
			continue;
		}
	}
	for(i=0;i<count;i++)
	cout<<c[i]<<" ";
	cout<<endl;
	while(i<n)
	{
		flag=0;
		for(k=0;k<count;k++)
		{
			if(c[k]==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[count++]=a[i];
		}
		i++;
	}
	while(j<m)
	{
		flag=0;
		for(k=0;k<count;k++)
		{
			if(c[k]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[count++]=b[j];
		}
		j++;
	}
	for(i=0;i<count;i++)
	cout<<c[i]<<" ";
	cout<<endl;
	return 0;
}
