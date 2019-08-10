#include<iostream>
#define MAX1 10000//INCREASE THE COUNT
#define MAX2 10000
using namespace std;
char park_layout[MAX1][MAX2];
int park_reachability[MAX1][MAX2]={0};
int r,c,x1,y1,x2,y2,x3,y3,c1,c2;
void movement(int x,int y)
{
 if(((x>r-1)||(x<0)||(y>c-1)||(y<0))||park_layout[x][y]==1)
    return;
 if(park_layout[x][y]=='M'||((park_layout[x][y]=='G')&&(((x!=x1)&&(y!=y1))||((x!=x2)&&(y!=y2))||((x!=x3)&&(y!=y3)))))
    {
      park_reachability[x][y]=1;
      
    }
 else if(park_layout[x][y]=='W')
    {
      park_reachability[x][y]=0;
      return;
    }
 cout<<"JAI RAM JAI HANUMAN"<<x<<" "<<y<<endl;
 movement(x+1,y);
 movement(x,y+1);
 movement(x,y-1);
 movement(x-1,y);
 return;
}
int main()
{
  int i,j,k;
  //cin>>r>>c;
  r=4;
  c=4;
  x1=1;
  y1=1;
  x2=2;
  y2=1;
  x3=3;
  y3=1;
  c1=1;
  c2=3;
  //park_layout[r][c]={{'G','G','G','G'},{'G','W','W','M'},{'G','G','W','W'},{'M','G','M','M'}};
  //cin>>x1>>x2>>y1>>y2>>x3>>y3>>c1>>c2;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>park_layout[i][j];
      park_reachability[i][j]=-1;
    }
  }
    for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<"HELLO JAI RAM JAI HANUMAN"<<park_layout[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<c1-1<<" "<<c2-1<<endl;
  movement(c1-1,c2-1);
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<park_reachability[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
