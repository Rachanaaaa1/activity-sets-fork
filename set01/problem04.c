// Write a C program to add two numbers using **pass by reference**

#include<stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);


int input(){
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  return n;
}

void add(int a, int b,int *sum){
  *sum = a + b;
}

void output(int a,int b,int sum){
  printf("The sum of %d and %d is %d",a,b,sum);
}

int main(){
  int x,y,z;
  x=input();
  y=input();
  add(x,y,&z);
  output(x,y,z);
  return 0;
}