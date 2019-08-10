#include<iostream>
#include<string.h>
#include<cstdlib>
#define MAX 100000
using namespace std;
int main()
{
    int i,j,k,l;
    char str[MAX];
    int count[26]={0};
    i=0;
    while(str[i]!='\0')
    {
        count[str[i]-'a']++;
        i++;
    }
    int len=strlen(str);
    int maximum=-100,minimum=10000;
    int flag=0;
    for(i=0;i<26;i++)
    {
        if(count[i])
        {
            if(count[i]>maximum)
            {
                maximum=count[i];
            }
            else if(count[i]<minimum)
            {
                minimum=count[i];
            }
        }
    }
    cout<<minimum<<" "<<maximum<<endl;
    int min_count=0,max_count=0;
    for(i=0;i<26;i++)
    {
        if(count[i])
        {
            if(count[i]==maximum)
            {
                max_count++;
            }
            else if(count[i]==minimum)
            {
                min_count++;
            }
        }
    }
    if(minimum==maximum)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if(((abs(minimum-maximum))==1)&&(max_count==1)||(min_count==1))
    {
        cout<<"YES"<<endl;
    }
else{
    cout<<"NO"<<endl;
    return 0;
}
    /*for(i=0;i<=len;i++)
    {
        if(maxi[i])
        compare++;
    }
    if(compare>2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(compare==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if((compare==2)&&(flag==1))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
    }*/
    return 0;
}

