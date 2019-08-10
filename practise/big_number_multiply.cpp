#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j,g1;
	char str1[100];
	char str2[100];
	int result[10000]={0};
	int temp1[10000]={0};
	int temp2[10000]={0};
	cin>>str1>>str2;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int count1=0,count2=0;
	for(i=0;i<len1;i++)
	{
		temp1[count1++]=str1[len1-i-1]-'0';
	}
	for(i=0;i<len2;i++)
	{
		temp2[count2++]=str2[len2-i-1]-'0';
	}
	int count=0,flag=0;
	int sum_lth=0,index_count;
	int temporary[1000]={0};
	int permanent[1000]={0};
	for(i=0;i<len2;i++)
	{
		index_count=0;
		int carry=0;
		int number=pow(10,count)*temp2[i];
		for(j=0;j<len1;j++)
		{
			int num=number*temp1[j]+carry;
			temporary[index_count++]=num%10;
			carry=num/10;
		}
		while(carry)
		{
			temporary[index_count++]=carry%10;
			carry=carry/10;
		}
		/*for(g1=0;g1<index_count;g1++)
		{
			cout<<temporary[g1]<<" ";
		}*/
		count++;
		if(flag)
		{
			int t1=0,t2=0,c1=0,carry_temp=0;
			while(t1!=sum_lth&&t2!=index_count)
			{
				int temp_num=temporary[t2]+permanent[t1]+carry_temp;
				temporary[c1]=temp_num%10;
				carry_temp=temp_num/10;
				t1++;
				c1++;
				t2++;
			}
			//cout<<"\n";
			while(t1!=sum_lth)
			{
				int tempoo=permanent[t1]+carry_temp;
				temporary[c1++]=tempoo%10;
				carry_temp=tempoo/10;
				t1++;
			}	
			while(t2!=index_count)
			{
				int tempoo=temporary[t2]+carry_temp;
				temporary[c1++]=tempoo%10;
				carry_temp=tempoo/10;
				t2++;
			}
			while(carry_temp)
			{
				temporary[c1++]=carry_temp%10;
				carry_temp/=10;
			}
			index_count=c1;
		}
		for(g1=0;g1<index_count;g1++)
		{
			permanent[g1]=temporary[g1];
		}
		//cout<<"\n";
		sum_lth=index_count;
		flag=1;	
	}
	for(i=sum_lth-1;i>=0;i--)
	cout<<permanent[i]<<" ";
	cout<<"\n";
	return 0;
}
