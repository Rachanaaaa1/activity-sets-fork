// Write a program to find the triangle with smallest area in n given triangles.

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

Triangle input_triangle(){
  Triangle n;
  printf("Enter the base");
  scanf("%f",&n.base);
  printf("Enter the height");
  scanf("%f",&n.height);
}

void input_n_triangles(int n, Triangle t[n]){
  Triangle i,n,t[n];
  for(int i = 0;i < n;i++){
      printf("Enter the value of triangle \n");
      scanf("%d",t[i]);
    }
  }
  
void find_area(Triangle *t){
  float area;
  


  
}

