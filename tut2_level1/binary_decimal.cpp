#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,deci=0,p=0;
	char str[32];
	cin>>str;
	for(i=0;str[i]!='\0';i++);
	int n=i;
	cout<<"length of the string is "<<n<<endl;
	for(i=n-1;i>=0;i--,p++)
	{
		if(str[i]=='1')
		deci=deci+pow(2,p);	
	}
	cout<<deci;
	return 0;
}
