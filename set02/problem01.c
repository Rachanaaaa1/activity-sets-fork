//  Write a program to find the area of a triangle.

#include<stdio.h>
#include<math.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
  float base,height;
  input(base,height);
  return 0;
}

void input(float base, float height){
  float area;
  printf("Enter the base and height \n");
  scanf("%f%f",&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base , float height, float *area){ 
  *area = (base * height) / 2;
  }

void output(float base, float height, float area){  
  printf("The area of triangle with  base %f and height %f is %f",base,height,area);
}

