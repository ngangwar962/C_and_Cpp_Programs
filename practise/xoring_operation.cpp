#include <iostream>
using namespace std;
long long int a,b,temp;
int main() {
	long int i,j,k,t;
	cin>>t;
	while(t)
	{
	    cin>>a>>b;
	    temp=0;
	    for(i=a;i<=b;i++)
	    {
	        temp=temp^i;
	    }
	    if(temp%2==0)
	    {
	        cout<<"Even"<<endl;
	    }
	    else
	    {
	        cout<<"Odd"<<endl;
	    }
	    t--;
	}
	return 0;
}

