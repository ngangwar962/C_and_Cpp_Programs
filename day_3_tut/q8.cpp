#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	char str1[1000],str2[1000];
	cout<<"enter the two binary string in binaries"<<endl;
	cin>>str1>>str2;
	for(i=0;str1[i]!='\0';i++);
	int len1=i;
	for(j=0;str2[j]!='\0';j++);
	int len2=j;
	cout<<len1<<" "<<len2<<endl;
	int count=0;
	long int sum1=0;
	for(i=len1-1;i>=0;i--,count++)
	{
		if(str1[i]=='1')
		{
			sum1=sum1+pow(2,count);
		}
	}
	long int sum2=0;
	count=0;
	for(j=len2-1;j>=0;j--,count++)
	{
		if(str2[j]=='1')
		{
			sum2=sum2+pow(2,count);
		}
	}
	cout<<sum1<<" "<<sum2<<endl;
	int hamming_distance=abs(sum1-sum2);
	cout<<"hamming distance is "<<hamming_distance<<endl;
	return 0;
}
