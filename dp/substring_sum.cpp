#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	long int size=(len*(len+1))/2;
	string s[size];
	int count=0;
	long int arr[size]={0};
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string st=str.substr(i,j);
			s[count++]=st;
		}
	}
	for(i=0;i<count;i++)
	{
		int index=0;
		long int temp=s[i][index++]-'0';
		while(s[i][index]!='\0')
		{
			temp=((temp*10)%1000000007+(s[i][index]-'0')%1000000007)%1000000007;
			if(temp<0)
			temp=temp+1000000007;
			index++;
		}
		arr[i]=temp;
		//cout<<"total sum="<<arr[i]<<"\n";
	}
	for(i=0;i<count;i++)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;
}
