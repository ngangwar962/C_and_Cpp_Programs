#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	getline(cin,str);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str.erase(i,1);
		}
		i++;
	}
	cout<<str<<endl;
	return 0;
}
