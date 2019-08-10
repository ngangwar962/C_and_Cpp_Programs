#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,k;
    long int test;
    cin>>test;
    long int c0=0;
    while(test)
    {
    c0++;
    string str;
    cin>>str;
    long int len=str.length();
    if(len==1)
    {
        cout<<"no answer"<<"\n";
        test--;
        continue;
    }
    int index_i,index_j;
    int flag=0;
    for(i=len-1;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(str[i]>str[j])
            {
                index_i=j;
                index_j=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    {
        cout<<"no answer"<<"\n";
        test--;
        continue;
    }
    else
    {
        if(index_j==len-1)
        {
            for(i=0;i<index_i;i++)
            {
                cout<<str[i];
            }
            cout<<str[index_j];
            for(i=index_i;i<index_j;i++)
            {
                cout<<str[i];
            }
        }
        else
        {
            if(index_i!=0)
            {
                for(i=0;i<index_i;i++)
                cout<<str[i];
                for(i=index_j;i<len;i++)
                cout<<str[i];
                cout<<str[index_i];
            }
            else
            {
                for(i=index_j;i<len;i++)
                cout<<str[i];
                for(i=0;i<index_j;i++)
                cout<<str[i];
            }
        }
    }
    cout<<"\n";
    test--;
    cout<<"stuck"<<"\n";
    }
    cout<<c0<<"\n";
    return 0;
}
