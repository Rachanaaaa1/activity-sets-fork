/*  Write a program to find the average of all the odd elements in an array
input : 5      5  4 3 8 0
output : Average of all the odd elements is: 4 */

#include<stdio.h>
#include<math.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
  int n = input_n();
  int a[n];
  input(n,a);
  float avg = odd_average(n , a);
  output(avg);
  return 0;
}

int input_n(){
  int n;
  printf("Enter the array size ");
  scanf("%d",&n);
  return n;
}

void input(int n, int a[n]){
  for(int i = 0; i < n; i++){
    printf("Enter the elements");
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n]){
  int j = 0,sum = 0;
  float avg;
  for(int i = 0; i < n;i++){
    if(a[i] % 2 != 0){
        j++;
      sum = sum + a[i];
    }
  }
  avg = sum / j;
  return avg;
}

void output(float avg){
  printf("Average of all the odd elements is %0.0f",avg);
}
