#include<iostream>
#include<stdlib.h>
#include<math.h>
#define epsilon 0.0001
using namespace std;
int main()
{
    double n;
    int i,j,k;
    double a,b;
    cin>>n;
    for(i=1;i*i<n;i++);
    a=i-1;
    b=i;
    double actual=(a+b)/2.0;
    double avg;
    //return 0;
    double prev=n-(double)(actual*actual);
    while(fabs(prev)>0.0000001)
    {
    //cout<<fabs(prev)<<endl;
        if((actual*actual)>n)
        {
            b=actual;
        }
        else
        {
            a=actual;
        }
        actual=(a+b)/2.0;
        //cout<<a<<" "<<b<<endl;
        prev=n-(double)(actual*actual);
    }
    cout<<"final "<<actual<<endl;
    return 0;
}
