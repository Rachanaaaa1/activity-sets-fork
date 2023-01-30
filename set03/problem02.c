// Write a program to find whether the given 3 points form a triangle
// inp[ut 1 1  ,  0 0   , 1 1
//The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle
// area of triangle = (1/2) * ( x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) )   !=  0

#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("Enter (x1 , y1) , (x2 , y2) and (x3 , y3) \n");
  scanf("%f %f %f %f %f %f)",x1,y1,x2,y2,x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int result = (0.5) * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
  return result;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if(result == 1){
    printf("it forms a triangle");
  }
   else{
      printf("The points  do not form a triangle");
  }
}

int main(){
  float x1,y1,x2,y2,x3,y3,t,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}