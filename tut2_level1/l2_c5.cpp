#include<iostream>
using namespace std;
int main()
{
int i,n;
cin>>n;
for(i=1;i*i*i<=n;i++);
cout<<i-1;
return 0;
}
