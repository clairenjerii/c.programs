 //voting eligibility
#include<stdio.h>
int main(){
  int age,citizenship;
  printf("Enter your age in years:");
  scanf("%d",&age);
  printf("Enter citizenship:");
  scanf("&kenyan citizen");
  if(age>=18){
    printf("eligible to vote");}
  else{
    printf("not eligible");
    }
  return 0;
  }