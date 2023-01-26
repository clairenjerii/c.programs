//program to find simple interest
#include<stdio.h>
int main()
{
  float p,r,t,SI;
  printf("Enter value of p,r and t:");
 scanf("%f%f%f",&p,&r,&t);
  SI=(p*r*t)/100;
  printf("SI=%.2f",SI);
  return 0;
  }