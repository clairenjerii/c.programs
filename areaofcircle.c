//program to find the area of a circle
#include<stdio.h>
#define pi 3.142
int main()
{
  float radius,area;
  printf("\n Enter value of RADIUS:");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("The area is %f",area);
  return 0;
  }