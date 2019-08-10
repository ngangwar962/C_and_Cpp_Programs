#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n1,n2,n3;
	int count=0;
	cin>>n1>>n2>>n3;
	int a1[n1],b1[n2],c1[n3],d[n1+n2+n3];
	for(i=0;i<n1;i++)
	cin>>a1[i];
	for(j=0;j<n2;j++)
	cin>>b1[j];
	for(k=0;k<n3;k++)
	cin>>c1[k];
	int a=a1[0],b=b1[0],c=c1[0];
	int min;
	if(a>b)
	{
		if(a>c)
		{
			if(c>b)
			{
				min=b;
			}
			else
			{
				min=c;
			}
		}
		else
		{
			min=b;
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
			{
				min=c;
			}
			else
			{
				min=a;
			}
		}
		else
		{
			min=a;
		}
	}
	i=0;j=0;k=0;count=0;
	if(min==a)
	{
		while(i<n1&&j<n2&&k<n3)
		{
			if(b1[j]>a1[i])
			{
				i++;
			}
			else if(b1[j]==a1[i])
			{
				while(k<n3)
				{
					if(c1[k]<a1[i])
					{
						k++;
					}
					else if(c1[k]>a1[i])
					{
						i++;
						j++;
						break;
					}
					else if(c1[k]==a1[i])
					{
						d[count++]=a1[i];
						i++;
						j++;
						k++;
						break;
					}
				}
			}
		}
	}
	else if(min==b)
	{
		while(i<n1&&j<n2&&k<n3)
		{
			if(a1[i]>b1[j])
			{
				j++;
			}
			else if(a1[i]==b1[j])
			{
				while(k<n3)
				{
					if(b1[j]>c1[k])
					{
						k++;
					}
					else if(b1[j]<c1[k])
					{
						j++;
						i++;
						break;
					}
					if(b1[j]==c1[k])
					{
						d[count++]=b1[j];
						j++;
						k++;
						i++;
						break;
					}
				}
			}
		}
	}
	else if(min==c)
	{
		while(i<n1&&j<n2&&k<n3)
		{
			if(c1[k]<b1[j])
			{
				k++;
			}
			else if(c1[k]==b1[j])
			{
				while(i<n1)
				{
					if(c1[k]<a1[i])
					{
						k++;
						j++;
						break;
					}
					else if(c1[k]>a1[i])
					{
						i++;
					}
					else if(c1[k]==a1[i])
					{
						d[count++]=c1[k];
						k++;
						i++;
						j++;
						break;
					}
					
				}
			}
		}	
	}
	for(i=0;i<count;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	return 0;
}
