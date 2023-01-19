 //Write a C program to compare three numbers using **pass by reference** 

#include<stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int input(){
  int x;
  printf("Enter three numbers :");
  scanf("%d",&x);
  return x;
}

void compare(int a, int b, int c, int *largest){
  int num;
    if(a > b && a > c)  
    {  
       *largest = a;  
    }  
    else  
    {  
      if(b > c)  
          *largest = b;  
       else  
          *largest = c; 
      }
}

void output(int a, int b, int c, int largest){
  printf("The largest of %d ,%d and %d is %d",a,b,c,largest);
  }

int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  }