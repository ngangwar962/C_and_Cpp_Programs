#include<iostream>
using namespace std;
long int sum=0;
int arr[MAX]
long int room=0;
int main()
{
    int i,j,k,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
        int count=0;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<j;k++)
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
            }
        }
	        sum=sum*2;
    	for(j=1;j<=n;j++)
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
    		
    	}
            cout<<sum<<endl;
    }
    return 0;
}
