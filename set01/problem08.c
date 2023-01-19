//Write a C program to find sum of _n_ different numbers entered by the user.

#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int input_array_size(){
  int x;
  printf("Enter a size \n");
  scanf("%d",&x);
  return x;
  }

void input_array(int n, int a[n]){
  for(int i = 0;i< n;i++)
  {  
    printf("Enter the numbers : \n");
    scanf("%d",&a[i]);
  }
  }

int sum_n_array(int n, int a[n]){
  int i,sum = 0;
  
 	for(i = 0; i < n; i++)
 	{
      sum = sum + a[i]; 
 	}
	 return sum;	
  }

void output(int n, int a[n],int sum){
  int i;
 	for(int i = 0; i < n; i++)
    {
  printf(" %d+",a[i]);
}
  printf("%d is %d \n",a[i],sum);
  }

  int main(){
  int n;
  n = input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum = sum_n_array(n,a);
  output(n,a,sum);
    return 0;
  }
