#include <stdio.h>
int main() {
  int i,r,c;
int a[2][3][3]={{2,4,6},{1,3,5},{7,8,9}},{{6,1,2},{3,2,5},{1,9,7}};
  for (i=0;i<2;i++)
    {
      for(r=0;r<3;r++)
  {
    for(c=0;c<3;c++){
      
        printf("%d ",a[i][r][c]);
      }
    }
  }
return 0;
  }