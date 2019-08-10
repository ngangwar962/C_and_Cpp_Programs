#include<iostream>
#include<string.h>
using namespace std;
int n;
char str[10000];

		  //0 //1  //2   //3   //4   //5   //6  //7   //8   //9 
char phone[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void gstring(int a[],int start,int last)
{
	int i,j;
	if(start>last)
	{
		str[start]='\0';
		cout<<str<<endl;
		return;
	}
	for(j=0;j<strlen(phone[a[start]]);j++)
	{
		str[start]=phone[a[start]][j];
		gstring(a,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cout<<"enter the no of elements in the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"array element has to be between 2 to 9"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	gstring(a,0,n-1);
	return 0;
}
