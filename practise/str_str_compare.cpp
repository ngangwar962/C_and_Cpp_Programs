#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string c1,string c2)
{
	return c1.size()<c2.size();
}
int main()
{
	int i,j,k,l;
	string arr[]={"RamanClasses","is","Monday"};
	sort(arr,arr+3,compare);
	for(i=0;i<3;i++)
	cout<<arr[i]<<endl;
	return 0;
}

