#include<iostream>
#include<math.h>
#define MAX 1000000
using namespace std;
int factors[MAX]={0};
int temp[MAX]={0};
static int co=0;
static int permute=0,correct_permute=0;
int correct_match(int a[],int len)
{
	int i,j,k;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(a[i]==factors[j])
			{
				if(a[i+1]==factors[j+1])
				return 0;
			}
		}
	}
}
int match(int a1[],int size1)
{
	int i,j,k;
	int flag=0;
	int flag_copy[size1]={0};
	for(i=0;i<size1;i++)
	{	
		flag=0;
		for(j=0;j<size1;j++)
		{
			if((a1[i]==factors[j])&&(!flag_copy[j]))
			{
				flag=1;
				flag_copy[j]=1;
				break;
			}
		}
		if(flag==0)
		{
			return 0;
		}
	}
	for(i=0;i<size1;i++)
	{
	if(!flag_copy[i])
	return 0;
	}
	return 1;	
}
void permutation(int a[],int last,int start,int len)
{
	int i,j,k;
	co++;
	if(start>=last)
	{
		if(match(temp,len))
		{
			if(correct_match(temp,len))
			{	
			correct_permute++;
			}
			permute++;
		}
		return;
	}
	for(i=0;i<len;i++)
	{
		temp[start]=factors[i];
		permutation(a,last,start+1,len);
	}
	return;
}
int main()
{
  	int i,j,k,l,n,t;
  	cin>>t;
  	while(t)
  	{
  		cin>>n;
  		int sq=sqrt(n);
  		int secured[MAX]={0};
  		int count=0;
  		for(i=1;i<sq;i++)
  		{
  			if(n%i==0)
  			{
  				factors[count]=i;
  				secured[count]=i;
  				count++;
  			}
  		}
  		for(j=sq;j<=n;j++)
  		{
  			if(n%j==0)
  			{
  				factors[count]=j;
  				secured[count]=j;
  				count++;
  			}
  		}
  		int c=0;
  		int tempo[MAX]={0};
  		for(i=0;i<count;i++,c++)
  		{
  			tempo[c]=factors[i];
  		}
  		/*for(i=0;i<count;i++)
			cout<<tempo[i]<<" ";
			cout<<endl;*/
  		permutation(secured,count,0,count);
  		cout<<correct_permute<<endl;
  		correct_permute=0;
  		permute=0;
  		t--;
  	}
  	return 0;
}
