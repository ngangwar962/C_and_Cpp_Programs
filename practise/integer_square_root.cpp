#include<iostream>
#include<stdlib.h>
#define epsilon 0.0001
using namespace std;
int main()
{
    int n;
    int i,j,k;
    double a,b;
    cin>>n;
    for(i=1;i*i<n;i++);
    a=i-1;
    b=i;
    double square_root=0;
    double actual=a+b/2;
    while(abs(a-b)>epsilon)
    {
        double avg=(double)(a+b)/2.0;
        actual=avg;
        cout<<avg<<endl;
        if(avg*avg>n)
        {
            b=(double)(a+avg)/2.0;
            cout<<square_root<<endl;
        }
        else
        {
            a=(double)(avg+b)/2.0;
            square_root=a;
            cout<<square_root<<endl;
        }
    }
    cout<<square_root<<endl;
    return 0;
}
