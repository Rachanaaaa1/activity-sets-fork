// Write a program to find the distance between two points.
//input : 1.0 1.0  and 2.0 2.0
// The Distance between (1.0,1.0) and (2.0,2.0) is 1.0

#include<stdio.h>
#include<math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
  int a,b,res;
  Point x = input();
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}

Point input(){
  Point x;
  printf("Enter the first and second points \n");
  scanf("%f %f",&p.x,&p.y);
  return x;
}

void dist(Point a, Point b, float *res){
  dist = sqrt(pow(a.x - b.x,2) + pow(a.y - b.y ,2));
  *res = dist;
}

void output(Point a, Point b, float res){
  printf("The distance between (%f,%f) and (%f ,%f) is %f",a,b,res);
}
