#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a1[n1],b1[n2],c1[n3],d[n1+n2+n3];
	for(i=0;i<n1;i++)
	cin>>a1[i];
	for(i=0;i<n2;i++)
	cin>>b1[i];
	for(i=0;i<n3;i++)
	cin>>c1[i];
	int m,count;
	i=0;j=0;k=0;count=0;
	while(i<n1&&j<n2&&k<n3)
	{
		int a=a1[i],b=b1[j],c=c1[k];
		if(a>b)
		{
			if(a>c)
			{
				if(b>c)
				{
					d[count++]=c;
					k++;
				}
				else
				{
					d[count++]=b;
					j++;
				}
			}
			else
			{
				d[count++]=b;
				j++;
			}
		}
		else
		{
			if(b>c)
			{
				if(a>c)
				{
					d[count++]=c;
					k++;	
				}
				else
				{
					d[count++]=a;
					i++;
				}
			}
			else
			{
				d[count++]=a;
				i++;
			}	
		}
	}
	while(i<n1&&j<n2)
	{
		if(a1[i]<b1[j])
		{
			d[count++]=a1[i];
			i++;
		}
		else
		{
			d[count++]=b1[j];
			j++;
		}
	}
	while(j<n2&&k<n3)
	{
		if(b1[j]<c1[k])
		{
			d[count++]=b1[j];
			j++;
		}
		else
		{
			d[count++]=c1[k];
			k++;
		}
	}
	while(i<n1&&k<n3)
	{
		if(a1[i]<c1[k])
		{
			d[count++]=a1[i];
			i++;
		}
		else
		{
			d[count++]=c1[k];
			k++;
		}
	}
	while(i<n1)
	{
		d[count++]=a1[i];
		i++;
	}
	while(j<n2)
	{
		d[count++]=b1[j];
		j++;
	}
	while(k<n3)
	{
		d[count++]=c1[k];
		k++;
	}
	for(i=0;i<count;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	return 0;
}
