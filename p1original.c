#include<stdio.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the 4 numbers:\n");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
}
void find_distance(float x1,float x2,float y1,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)(y2-y1))
}
void output(float x1,float y1,float x2,float y2,float area)
{
  
}
