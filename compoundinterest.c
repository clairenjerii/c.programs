//program to find compound interest
#include<stdio.h>
int main()
{
  float p,r,n,t,CI;
  printf("Enter value of p,r,n and t:");
  scanf("%f%f%f%f",&p,&r,&n,&t);
  CI=p(1+r/n)^n*t;
  printf("CI=%f",CI);
  return 0;
  }