#include<stdio.h>
void input(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the points (x1,y1),(x2,y2),(x3,y3)\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float d=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
      printf("area is %f",d);
  if (d>=0)
    return 1;
  else
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==1)
    printf("the given points form a triangle");
  else
    printf("not a triangle");
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  int istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}