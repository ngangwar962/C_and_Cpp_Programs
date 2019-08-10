#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	getline(cin,str);
	vector<string> vec;
	i=0;
	string st="";
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			vec.push_back(st);
			st="";
		}
		st+=str[i];
		i++;
	}
	if(str[i]=='\0')
	vec.push_back(st);
	string st1;
	string st2;
	int mini=10000;
	int maxi=0;
	for(i=0;i<vec.size();i++)
	{
		if(vec[i].length()>maxi)
		{
			st1=vec[i];
			cout<<"max is here "<<vec[i]<<"\n";
			maxi=vec[i].length();
		}
		if(vec[i].length()<mini)
		{
			st2=vec[i];
			cout<<"min is here "<<vec[i]<<"\n";
			mini=vec[i].length();
		}
	}
	cout<<st1<<" "<<st2<<"\n";
	return 0;
}
