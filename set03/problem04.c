//  Write a program to find nth number in fibonacci sequence.
// Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n,fibo;
  n = input();
  fibo = find_fibo(n);
  output(n,fibo);
  return 0;
}

int input(){
  int n;
  printf("enter the element");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n){
  if(n == 0 || n == 1){
    return n;
  }else{
    return find_fibo(n - 1) + find_fibo(n - 2);
  }
  
}

void output(int n, int fibo){
    printf("the fibo(%d) is %d",n,fibo);
    
    
}
