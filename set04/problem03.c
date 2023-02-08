// Write a program to find the `nCr` of given n and r
// input 6 3  output : for n = 6 and r = 3 ,nCr = 20

#include<stdio.h>
#include<math.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main(){
  int n,r,result;
  input_n_and_r(&n,&r);
  result = nCr(n,r);
  output(n,r,result);
}

void input_n_and_r(int *n, int *r){
  printf("Enter the n and r value \n");
  scanf("%d %d",n,r);
}

int nCr(int n, int r){
  int fact_n = 1;
  int fact_r = 1;
  int fact_diff = 1;
  int result;
  nCr = (fact_n) / (fact_r * fact_diff);
  
  for(int i = 1;i <= n;i++){
  int fact = fact * i;
  result = fact;
  }
  return result;
}

void output(int n, int r, int result){
  printf("for n = %d and r = %d , nCr = %d ",n,r,result);
}
