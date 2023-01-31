// Write a program to check if the given number is prime
// 3 is a prime number

#include<stdio.h>
#include<math.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n,result;
  n = input_number();
  result = is_prime(n);
  output(n,result);
  return 0;
}

int input_number(){
  int n;
  printf("Enter a number ");
  scanf("%d",&n);
  return n;
}

int is_prime(int n){
  int result;
 for(int i = 0; i <= n;i++){
   if(n % i == 0){
     result++;
   }
 }
  return result;
}

void output(int n, int result){
  if( result == 2){
    printf("%d is a prime number",n);
    }
  else{
    printf("%d is not a prime number",n);
  }
}

