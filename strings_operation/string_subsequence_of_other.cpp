#include<iostream>
using namespace std;
bool check(string str1,string str2,int index1,int index2)
{
	if(index1==-1&&index2>=0)
	return 0;
	if(index2==-1)
	return 1;
	if(str1[index1]==str2[index2])
	{
		return check(str1,str2,index1-1,index2-1);
	}
	return check(str1,str2,index1-1,index2);
}
int main()
{
	int i,j,k,l;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	int flag=0;
	if(len1<len2)
	{
		if(!check(str1,str2,len2-1,len1-1))//smaller last
		{
			flag=1;
			cout<<"No"<<"\n";
			return 0;
		}
	}
	else
	{
		if(!check(str1,str2,len1-1,len2-1))//smaller last
		{
			flag=1;
			cout<<"No"<<"\n";
			return 0;
		}
	}
	cout<<"Yes"<<"\n";
	return 0;
}
