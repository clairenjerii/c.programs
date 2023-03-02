//program to return even or odd using a function
#include<stdio.h>
int main()
{
int x;
  printf("Enter a value x:");
  scanf("%d",&x);
if(x%2==0){
  printf("x is divisible by 2");}
  else{
    printf("x is not divisible by 2");
    }
 return 0;
  }
//function definition
int a (int x)
{
  int a;
  a=x%2;
  return a;
}