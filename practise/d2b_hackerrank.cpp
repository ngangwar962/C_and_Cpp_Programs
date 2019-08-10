#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char str[33];
int index1=0;
void d2b(unsigned long int deci,char temp[])
{
    if(deci==0)
    return;
    d2b(deci/2,temp);
    temp[index1++]=(deci%2)+'0';
    cout<<temp[index1-1];
    return;
}
unsigned long int b2d(char str[],int index,int expo)
{
    if(expo==-1)
    return 0;
    return (str[index]-'0')*pow(2,expo)+b2d(str,index+1,expo-1);
}
int main()
{
    int i,j,k,t;
    unsigned long int original_deci;
    cin>>t;
    while(t)
    {
	    char temp[33];
	    index1=0;
	    for(i=0;i<32;i++)
	    str[i]='0';
	    str[32]='\0';
	    cin>>original_deci;
	    d2b(original_deci,temp);
	    cout<<endl;
	    temp[index1]='\0';
	    int len=strlen(temp);
	    int count=0;
	    for(i=32-len;i<32;i++)
	    {
		str[i]=temp[count++];
	    }
	    cout<<str<<endl;
	    for(i=0;i<32;i++)
	    {
		if(str[i]=='0')
		{
		    str[i]='1';
		}
		else
		{
		    str[i]='0';
		}
	    }
	    cout<<str<<endl;
	    unsigned long int value=b2d(str,0,31);
	    cout<<value<<endl;
	    t--;
    }
    return 0;
}
