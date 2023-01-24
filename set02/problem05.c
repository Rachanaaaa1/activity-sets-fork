// Write a program to find GCD _(HCF)_ of two numbers.
// MULTIPLICATION OF COMMOM FACTORS (highest nos)
// input 12,16

#include <stdio.h>
#include<math.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a ,b, gcd;
  a = input();
  b =input();
  gcd = find_gcd(a , b);
  output(a,b,gcd);
  return 0;
}

int input(){
  int n;
  scanf("%d",&n);
  return n;
  }

int find_gcd(int a, int b){
  int gcd;
  while(a > b){
    if(a > b){
      a = a - b;
    }
    else{
      b = b - a;
      }
    if(gcd == 1){
    printf("%d",a);
    }
  }
  return gcd;
}

void output(int a, int b, int gcd){
  printf("%d",);
  
  }
  
  

  

