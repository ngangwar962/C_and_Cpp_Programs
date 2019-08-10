#include<iostream>
#include<string.h>
#define MAX 100000
using namespace std;
char temp[MAX];
char simpler[1000][10];
char mediums[1000][10];
char harder[1000][10];
static int flag=0;
static int permute=0;
static int simple_count=0,medium_count=0,hard_count=0;
int final_count(char str[],int len,char c1,char c2,char c3)
{
	int i,j,k;
	int count[26]={0};
	for(i=0;i<len;i++)
	{
		count[str[i]-'A']++;
	}
	int index1=c1-'A';
	int index2=c2-'A';
	int index3=c3-'A';
	if(count[index1]&&count[index2])
	return 0;
	else if((count[index3])&&flag==0)
	{
		flag=1;
		return 1;
	}
	else if((count[index3])&&(flag==1))
	return 0;
 return 1;
}
int count_frequency(char str[],int len)
{
	int count[26]={0};
	int i;
	for(i=0;i<len;i++)
	{	
		count[str[i]-'A']++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]>1)
		{
			return 0;
		}
	}
	return 1;
	
}
void further_check(char str[],int len)
{
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			
		}
	}
}
void permutation(char str[],int len,int start,int s)
{
	int i;
	if(start>=len)
	{
		if(count_frequency(temp,len))
		{
			int t=0;
			for(i=len-s;i<len;i++)
			{
				simpler[simple_count][t++]=temp[i];
			}
			simpler[simple_count][t]='\0';
			//cout<<simpler[simple_count]<<endl;
			simple_count++;
			permute++;
		}
		return;
	}
	for(i=0;i<len;i++)
	{
	temp[start]=str[i];
	permutation(str,len,start+1,s);
	}
	return;
}
void permutation_medium(char str[],int len,int start,int s)
{
	int i;
	if(start>=len)
	{
		if(count_frequency(temp,len))
		{
			int t=0;
			for(i=len-s;i<len;i++)
			{
			mediums[medium_count][t++]=temp[i];
			}
			mediums[medium_count][t]='\0';
			//cout<<mediums[medium_count]<<endl;
			medium_count++;
			permute++;
		}
		return;
	}
	for(i=0;i<len;i++)
	{
	temp[start]=str[i];
	permutation_medium(str,len,start+1,s);
	}
	return;
}
void permutation_harder(char str[],int len,int start,int s)
{
	int i;
	if(start>=len)
	{
		if(count_frequency(temp,len))
		{
			int t=0;
			for(i=len-s;i<len;i++)
			{
			harder[hard_count][t++]=temp[i];
			}
			harder[hard_count][t]='\0';
			//cout<<harder[hard_count]<<endl;
			hard_count++;
			permute++;
		}
		return;
	}
	for(i=0;i<len;i++)
	{
	temp[start]=str[i];
	permutation_harder(str,len,start+1,s);
	}
	return;
}
int main()
{
	int i,j,k,l,x,s,y,m,z,c;
	char c1,c2,c3;
	cin>>x>>s>>y>>m>>z>>c>>c1>>c2>>c3;
	char str[26];
	char simple[x],ssimple[x],mmedium[y],hhard[z],medium[y],hard[z];
	char temp;
	int count=0;
	for(i=0;i<x;i++)
	{
		simple[count]='A'+i;
		ssimple[count]='A'+i;
		temp='A'+i;
		count++;
	}
	simple[count]='\0';
	permutation(simple,count,0,s);
	//cout<<permute<<endl;
	count=0;
	permute=0;
	char temp1;
	for(j=1;j<=y;j++)
	{
		medium[count]=temp+j;
		mmedium[count]=temp+j;
		temp1=temp+j;
		count++;
	}
	medium[count]='\0';
	permutation_medium(medium,count,0,m);
	//cout<<permute<<endl;
	permute=0;
	char temp2;
	count=0;
	for(k=1;k<=z;k++)
	{
		hard[count]=temp1+k;
		hhard[count]=temp1+k;
		count++;
	}
	hard[count]='\0';
	permutation_harder(hard,count,0,c);
	//cout<<permute<<endl;
	//cout<<simple<<"-->"<<medium<<"-->"<<hard<<endl;
	char temporary[MAX];
	int required=0;
	for(i=0;i<simple_count;i++)
	{
		int counter=0;
		j=0;
		while(simpler[i][j]!='\0')
		{
			temporary[counter++]=simpler[i][j];
			j++;
		}
		int med=0;
		j=0;
		int tempo_counter=counter;
		for(med=0;med<medium_count;med++)
		{
			counter=tempo_counter;
			j=0;
			while(mediums[med][j]!='\0')
			{
				temporary[counter++]=mediums[med][j];
				j++;
			}
			int har;
			int temp_counter=counter;
			for(har=0;har<hard_count;har++)
			{
				j=0;
				counter=temp_counter;
				while(harder[har][j]!='\0')
				{
					temporary[counter++]=harder[har][j];
					j++;
				}
				temporary[counter]='\0';
				if(final_count(temporary,strlen(temporary),c1,c2,c3))
				{
					cout<<temporary<<endl;
					required++;
				}
				//cout<<temporary<<endl;
			}
		}
	}
	cout<<required<<endl;
	return 0;	
}
