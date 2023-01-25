// Write a program to find GCD _(HCF)_ of two numbers.
// MULTIPLICATION OF COMMOM FACTORS (highest nos)
// input 12,16

#include <stdio.h>
#include<math.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a ,b, gcd = 1,min;
  a = input();
  b =input();
  gcd = find_gcd(a , b);
  output(a,b,gcd);
  return 0;
}

int input(){
  int n;
  printf("Enter a and b values ");
  scanf("%d",&n);
  return n;
  }

int find_gcd(int a, int b){
  int i,gcd = 1,min;
  if(a > b){
    min = b;
  }
  else{
    min = a;
  }
for(i = 1; i <= min; i++){
  if(a % i == 0 && b % i == 0){
    gcd = i;
  }
  }
  return gcd;
} 

void output(int a, int b, int gcd){
  printf("the gcd of %d and %d  is %d",a,b,gcd);
  
  }
  
  

  

