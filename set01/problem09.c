// Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

float input(){
  float x;
  printf("Enter a number ");
  scanf("%f",&x);
  return x;
}

float square_root(float n){
  float x0 = 1.0;
  float xn;
  do{
    xn = (x0 + n /x0) / 2;
    x0 = xn;
  } while(fabs(xn * xn - n) > 0.00001);
  return xn;
  }

void output(float n, float sqrroot){
  printf("square root of %f is %f \n",n,sqrroot);
}

int main(){
  float n = input();
  float sqrroot = square_root(n);
  output(n, sqrroot);
  return 0;
  }