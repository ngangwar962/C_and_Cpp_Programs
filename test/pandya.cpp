#include<iostream>
#include<cstdlib>
#define MAX 1000000
using namespace std;
long int sum=0;
int arr[MAX]={0};
long int room=0;
int main()
{
    int i,j,k,t,n;
	for(i=1;i<count;i++)
	{
			
	}
    /*for(i=1;i<=MAX;i++)
     {
	sum=0;
    	for(j=1;j<i;j++)
        {
            for(k=1;k<i;k++)
            {
                room=j+k;
                if((room/10)==0)
                {
                    sum+=room;
                }
                else
                {
                     int even=0;
                     int odd=0;
                    while(room)
                    {
                        int a=room%10;
                        room/=10;
                        if(a%2==0)
                        {
                            even+=a;
                        }
                        else
                        {
                            odd+=a;
                        }
                    }
                    sum+=abs(even-odd);
                }
            }//k loop
        }//j loop
	sum=sum*2;
    	for(j=1;j<=i;j++)
    	{
    		room=j+j;
    		if((room/10)==0)
                    {
                        sum+=room;
                    }
                    else
                    {
                         int even=0;
                         int odd=0;
                        while(room)
                        {
                            int a=room%10;
                            room/=10;
                            if(a%2==0)
                            {
                                even+=a;
                            }
                            else
                            {
                                odd+=a;
                            }
                        }
                        sum+=abs(even-odd);
                    }
    		
    	}//next for loop
        arr[i]=sum;
	//cout<<arr[4]<<endl;
    }*/
    cout<<"enter the number of test case"<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
	cout<<"enter n"<<endl;
        cin>>n;
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
