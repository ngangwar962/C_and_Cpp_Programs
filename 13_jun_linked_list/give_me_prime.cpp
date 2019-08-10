#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    if(n<2)
    return 0;
    int flag=0;
    for(i=2;i<=n;i++)
    {
    	flag=0;
        if(i==2)
        {
            flag=1;
            cout<<i<<" ";
            continue;
        }
        int sq=sqrt(i);
        for(j=2;j<=sq;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
