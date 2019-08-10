#include<iostream>
using namespace std;
int main()
{
int i,j,k,temp;
int arr[]={5,4,3,2,1};
for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
for(i=0;i<5;i++)
cout<<arr[i]<<" ";
return 0;
}
