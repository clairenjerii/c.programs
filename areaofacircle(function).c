//program to return area of a circle using a function
#include<stdio.h>
//#include pi 3.142
int area(int pi,int r);//function prototype
int main()
{
int radius,pi=3,result;
  printf("Enter the radius:");
  scanf("%d",&radius);
//area=(pi,radius);
  result=area(pi,radius);
  printf("The area is %d",result);
 return 0;
  }
//function definition
int area(int pi,int radius)
{
  int a;
  a=pi*radius*radius;
  return a;
}