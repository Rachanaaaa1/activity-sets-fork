//  Write a program to find if a triangle is scalene.
// a = b = c = equilateral triangle
// a = b || b == c = isoceles triangle
// a != b != c  scalene triangle

#include<stdio.h>
#include<math.h>

int main(){
  int a,b,c,isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene( a, b,  c);
  output(a,b,c,isscalene);
  
  return 0;
  }

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side(){
  int side;
  printf("Enter three sides of a triangle: \n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c){
  
  if(a == b && b == c ){
    return 1;
    }
  else
  {
    return 0;
  }
  
  }  
  
void output(int a, int b, int c, int isscalene){

  if (isscalene == 1){
    printf(" The triangle with sides %d , %d and %d is  scalene \n",a,b,c);
    }
    else {
    printf("The triangle with sides %d , %d and %d is not scalene \n",a,b,c);
      }
  }

  
  
