#include<iostream>
#include<string.h>
using namespace std;
char simple_comb[100][100];
char middle_comb[100][100];
char complex_comb[100][100];
int real_count=0;
int flag=0;
int simple_count=0,middle_count=0,complex_count=0;
int double_check(char str[],char s3)
{
	int i=0;
	while(str[i]!='\0')
	{	
		if(str[i]==s3&&flag==0)
		{
			flag=1;
			return 1;
		}
		if(str[i]==s3&&flag==1)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
int check(char str[],char s1,char s2,char s3)
{
	int count[26]={0};
	int i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'A']++;
		i++;
	}
	if(count[s1-'A']==1&&count[s2-'A'])
	return 0;
	else
	{
		if(double_check(str,s3))
		{
			real_count++;
		}
	}
	return 1;
}
void subset_simple(char str[],int start,int last,int length,string outs="")
{
	int i;
	if(start==last)
	{
		int len=outs.length();
		if(len==length)
		{
			for(i=0;i<len;i++)
			{
				simple_comb[simple_count][i]=outs[i];
			}
			simple_comb[simple_count][i]='\0';
			simple_count++;
		}
		return;
	}
	subset_simple(str,start+1,last,length,outs);
	subset_simple(str,start+1,last,length,outs+str[start]);
	return;
}
void subset_middle(char str[],int start,int last,int length,string outs="")
{
	int i;
	if(start==last)
	{
		int len=outs.length();
		if(len==length)
		{
			for(i=0;i<len;i++)
			{
				middle_comb[middle_count][i]=outs[i];
			}
			middle_comb[middle_count][i]='\0';
			middle_count++;
		}
		return;
	}
	subset_middle(str,start+1,last,length,outs);
	subset_middle(str,start+1,last,length,outs+str[start]);
	return;
}
void subset_complex(char str[],int start,int last,int length,string outs="")
{
	int i;
	if(start==last)
	{
		int len=outs.length();
		if(len==length)
		{
			for(i=0;i<len;i++)
			{
				complex_comb[complex_count][i]=outs[i];
			}
			complex_comb[complex_count][i]='\0';
			complex_count++;
		}
		return;
	}
	subset_complex(str,start+1,last,length,outs);
	subset_complex(str,start+1,last,length,outs+str[start]);
	return;
}
int main()
{
	int i,j,k,l;
	int x,y,z,s,m,c;
	char s1,s2,s3;
	cin>>x>>s>>y>>m>>z>>c;
	cin>>s1>>s2;
	cin>>s3;
	char simple[x+1],middle[y+1],complex[z+1];
	int co2=0;
	for(i=0;i<x;i++)
	{
		simple[i]='A'+co2;
		co2++;
	}
	simple[i]='\0';
	for(j=0;j<y;j++)
	{
		middle[j]='A'+co2;
		co2++;
	}
	middle[j]='\0';
	for(k=0;k<z;k++)
	{
		complex[k]='A'+co2;
		co2++;
	}
	complex[k]='\0';
	int m1;
	subset_simple(simple,0,i,s);
	subset_middle(middle,0,j,m);
	subset_complex(complex,0,k,c);
	char resultant[27];
	for(i=0;i<simple_count;i++)
	{
		for(m1=0;m1<strlen(simple_comb[i]);m1++)
		{
			resultant[m1]=simple_comb[i][m1];
			
		}
		resultant[m1]='\0';
		int temp_len1=strlen(resultant);
		for(j=0;j<middle_count;j++)
		{
			for(m1=0;m1<strlen(middle_comb[j]);m1++)
			{
				resultant[temp_len1+m1]=middle_comb[j][m1];
			}
			resultant[temp_len1+m1]='\0';
			int temp_len2=strlen(resultant);
			for(k=0;k<complex_count;k++)
			{
				for(m1=0;m1<strlen(complex_comb[k]);m1++)
				{
					resultant[temp_len2+m1]=complex_comb[k][m1];
				}
				resultant[temp_len2+m1]='\0';
				check(resultant,s1,s2,s3);
			}
		}
	}
	long int calcul=x*y*z;
	cout<<calcul<<"\n";
	cout<<real_count<<"\n";
	return 0;
}
