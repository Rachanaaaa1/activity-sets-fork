#include<stdio.h>

int input(int *pa,int *pb);
void add(int a,int b,int *sum);
void output(int a,int b,int sum);

int input(int *pa,int *pb){
  printf("Enter two numbers :\n");
  scanf("%d%d",pa,pb);
  
}

void add(int a,int b,int *sum){
  *sum = a + b;
  }

void output(int a,int b,int c){
  printf("The sum of %d and %d is %d",a,b,c);
}

int main(){
  int x,y,z;
  input(&x,&y);
  find_sum(x,y,&z);
  output(x,y,z);
  return 0;
}