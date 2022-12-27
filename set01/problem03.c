#include<stdio.h>

int input();
int add(int a, int b);
void output(int a,int b,int c);

int input(){
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  return n;
}

int add(int a, int b){
  int sum ;
  sum = a + b;
  return sum;
}

void output(int a,int b,int c){
  printf("The sum of %d and %d is %d",a,b,c);
}

int main(){
  int x,y,z;
  x=input();
  y=input();
  z=sum(x,y);
  output(x,y,z);
  return 0;
}