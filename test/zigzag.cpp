#include<iostream>
#define MAX 1000
using namespace std;
long int a[MAX][MAX];
int n;
void inorder(int n1,int i)
{
    int j,count=0;
     if(i<n1)
            {
                count=0;
                for(j=i;j>=0;j--,count++)
                cout<<a[j][count]<<" ";
            }
     else if(i>=n1)
            {
                count=n1-1;
                for(j=i-n1+1;j<n1;j++,count--)
                {
                    cout<<a[count][j]<<" ";
                }
            }
}
void reverse(int n1,int i)
{
           int count=0,j;
           if(i<n1)
            {
                count=0;
                for(j=i;j>=0;j--,count++)
                {
                    cout<<a[count][j]<<" ";
                }
            }
           else if(i>=n1)
            {
                count=n1-1;
                for(j=i-n1+1;j<n1;j++,count--)
                {
                    cout<<a[j][count]<<" ";
                }
            }
            
}
int main()
{
    int i,j,k,t;
    cin>>t;
    int count=0;
    while(t)
    {
        cin>>n;
        a[n][n];
        count=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++,count++)
            {
                a[i][j]=count;
            }
        }
        for(i=0;i<(2*n-1);i++)
        {
            if(i%2==0)
            {
                inorder(n,i);
            }
            else
            {
                reverse(n,i);
            }
        }
        cout<<endl;
        t--;
    }
}
