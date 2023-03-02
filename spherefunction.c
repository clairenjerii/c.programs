//program to return volume of sphere
#include <stdio.h>
//#include pi 3.142
int volume(int pi,int radius);//function prototype
int main()
{
  int radius, pi=3,result;
  printf("enter the value  of radius:");
  scanf("%d",&radius);
  //volume=(pi,radius);
  result = volume(pi,radius);
    printf("the volume is %d",result);
  return 0;
  }
  //function definition
  int volume(int pi,int radius)
{
  int v;
  v=4/3*pi*radius*radius*radius;
  return v;
}