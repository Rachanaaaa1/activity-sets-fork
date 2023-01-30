// Write a program to find the triangle with smallest area in n given triangles.
// input : 2 3  ,   4 6
//The smallest triangle out of triangles with base and height (2,3) , (4,6) is the triangle having base 2.00, height 3.00 and area 3.00

#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int input_n(){
  int n;
  printf("Enter the size of an array \n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle(){
  Triangle t;
  printf("Enter the base");
  scanf("%f",&t.base);
  printf("Enter the altitude");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n]){
  for(int i = 0;i < n;i++){
    t[i] = input_triangle();
    }
  }
  
void find_area(Triangle *t){
  t -> area = (0.5) * (t -> base) * (t -> altitude);   
}

void find_n_areas(int n, Triangle t[n]){
  for(int i = 0;i < n;i++){
    find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle smallest = t[0];
  for(int i = 1;i < n;i++){
    if(t[i].area < smallest.area){
      smallest = t[i];
    }
  }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest){
  printf("The smallest triangle out of triangles with base and height  is the triangle having base,height and area %f ",t->area);
}

int main(){
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n ,t);
  find_area(t);
  find_n_areas(n,t);
  Triangle smallest = find_smallest_triangle(n,t);
  output(n , t ,smallest);
  return 0;
}