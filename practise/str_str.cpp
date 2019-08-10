#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i;
	string arr[]={"RamanClasses","is","Monday"};
	sort(arr,arr+3);
	for(i=0;i<3;i++)
	cout<<arr[i]<<"\n";
	return 0;
}
