// Write a program to find the smallest of three fractions
// input : 1 2 , 1 3 and 1 4       output : The smallest of 1/2, 1/3 and 1/4 is 1/4

#include<stdio.h>
#include<math.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input(Fraction *f1,Fraction *f2,Fraction *f3);
float smallest(Fraction f1,Fraction f2,Fraction f3);
void output(Fraction f);

int main(){
  Fraction f1,f2,f3,result;
  Fraction f = input(&f1,&f2,&f3);
  result = smallest(f1,f2,f3);
  output(f);
  return 0;
}

Fraction input(Fraction *f1,Fraction *f2,Fraction *f3){
  Fraction f;
  printf("Enter the num and den of f1 \n");
  scanf("%d %d",&f1->num,&f1->den);
  printf("Enter the num and den of f2 \n");
  scanf("%d %d",&f2->num,&f2->den);
  printf("Enter the num and den of f3 \n");
  scanf("%d %d",&f3->num,&f3->den);
  return f;
}

float smallest(Fraction f1,Fraction f2,Fraction f3){
  float result;
  float val1 = f1.num/f1.den;
  float val2 = f2.num/f2.den;
  float val3 = f3.num/f3.den;

  if(val1 < val2 && val1 < val3){
    return val1;
  }
  else if(val2 < val3){
    return val2;
  }else{
    return val3;
  }
  return result;
}

void output(Fraction f){
  printf("The smallest  is (%d / %d)",f.num,f.den);
}
