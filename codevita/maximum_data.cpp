#include<iostream>
using namespace std;
int main()
{
	int month[2],date[2],hour[2],minute[2];
	char digits[24];
	cin>>digits;
	int i,j,k;
	if(digits[0]>=(3+'0'))
	{
		cout<<"0"<<endl;
		return 0;
	}
	i=0;
	int number[12];
	int count=0;
	while(digits[i]!='\0')
	{
		if(i%2==0)
		{
			number[count++]=digits[i]-'0';
		}
		i++;
	}
	int s_index=2,f_index=1;
	int flag0=0,flag1=0,flag2=0,flag3=0;
	int index1,index2;
	for(i=0;i<count;i++)
	{
		if(number[i]==1)
		{
			index1=i;
			flag0=1;
		}
		if(number[i]==2)
		{
			index2=i;
			flag1=1;
		}
	}
	if(flag0==1&&flag1==1)
	{
		month[0]=1;
		month[1]=2;
		number[index1]=-1;
		number[index2]=-1;
	}
	else
	{
		if(flag0==1&&flag1==0)
		{
			month[1]=number[count-1];
			number[count-1]=-1;
			number[index1]=-1;
		}
		else if(flag0==0&&flag1==1)
		{
			if(number[0]!=0)
			{
				cout<<"0"<<endl;
				return 0;
			}
			else
			{
				month[0]=0;
				number[0]=-1;
				month[1]=number[count-1];
				number[count-1]=-1;
			}
		}
		else
		{
			cout<<"0"<<endl;
			return 0;
		}
	}
	int index3,index0;
	flag0=0;flag1=0;flag2=0,flag3=0;
	for(i=0;i<count;i++)
	{
		if(number[i]==0)
		{
			index0=i;
			flag0=1;
			continue;
		}
		if(number[i]==1)
		{
			index1=i;
			flag1=1;
			continue;
		}
		if(number[i]==2)
		{
			index2=i;
			flag2=1;
			continue;
		}
		if(number[i]==3)
		{
			index3=i;
			flag3=1;
			break;
		}	
	}
	if(flag3==1&&flag1==1)
	{
		date[0]=3;
		date[1]=1;
		number[index3]=-1;
		number[index1]=-1;
	}
	else if(flag3==1&&flag0==1)
	{
		date[0]=3;
		date[1]=0;
		number[index3]=-1;
		number[index0]=-1;
	}
	else if(flag3==0&&flag2==1)
	{
		date[0]=2;
		number[index2]=-1;
		int maxi=0;
		int index_max=0;
		for(i=0;i<count;i++)
		{
			if(number[i]>maxi)
			{
				maxi=number[i];
				index_max=i;
			}
		}
		number[index_max]=-1;
		date[1]=maxi;
	}
	else if(flag2==0&&flag3==0&&flag1==1)
	{
		date[0]=1;
		number[index1]=-1;
		int maxi=0;
		int index_max=0;
		for(i=0;i<count;i++)
		{
			if(maxi<number[i])
			{
				maxi=number[i];
				index_max=i;
			}
		}
		date[1]=maxi;
		number[index_max]=-1;
	}
	else 
	{
		date[0]=0;
		number[index0]=-1;
		int maxi=0,index_max=0;
		for(i=0;i<count;i++)
		{
			if(number[i]>maxi)
			{
				maxi=number[i];
				index_max=i;
			}
		}
		date[1]=maxi;
		number[index_max]=-1;
	}
	cout<<month[0]<<month[1]<<"/"<<date[0]<<date[1]<<" ";
	flag0=1;flag1=0;flag2=0,flag3=0;
	index0=0;index1=0;index2=0;index3=0;
	int counter2=0;
	for(i=0;i<count;i++)
	{
		if(number[i]==2)
		{
			flag2=1;
			index2=i;
			counter2++;
			continue;
		}
		if(number[i]==1)
		{
			flag1=1;
			index1=i;
			continue;
		}
		if(number[i]==0)
		{
			flag0=0;
			index0=0;
			continue;
		}
	}
	if(flag2==1&&flag3==1)
	{
		hour[0]=2;
		hour[1]=3;
		number[index2]=-1;
		number[index3]=-1;
	}
	else if(flag2==1&&counter2==2)
	{
		hour[0]=2;
		hour[1]=2;
		number[index2-1]=-1;
		number[index2]=-1;
	}
	else if(flag2==1&&flag1==1)
	{
		hour[0]=2;
		hour[1]=1;
		number[index2]=-1;
		number[index1]=-1;
	}
	else if(flag2==1&&flag0==1)
	{
		hour[0]=2;
		hour[1]=0;
		number[index2]=-1;
		number[index0]=-1;
	}
	else if(flag1==1&&flag2==0)
	{
		hour[0]=1;
		int maxi=0;
		int max_index;
		for(i=0;i<count;i++)
		{
			if(number[i]>maxi)
			{
				maxi=number[i];
				max_index=i;
			}
		}
		hour[1]=maxi;
		number[max_index]=-1;
	}
	else if(flag2==0&&flag1==0&&flag0==1)
	{
		hour[0]=0;
		int maxi=0;
		int max_index;
		for(i=0;i<count;i++)
		{
			if(number[i]>maxi)
			{
				maxi=number[i];
				max_index=i;
			}
		}
		hour[1]=maxi;
		number[max_index]=-1;
	}
	for(i=count-1;i>=0;i--)
	{
		if(number[i]!=-1)
		{
			minute[1]=number[i];
			number[i]=-1;
			break;
		}
	}
	for(i=count-1;i>=0;i--)
	{
		if(number[i]<6&&number[i]>=0)
		{
			minute[0]=number[i];
			number[i]=-1;
			break;
		}
	}
	cout<<hour[0]<<hour[1]<<":"<<minute[0]<<minute[1]<<endl;
	return 0;
}
