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
  Triangle t;
  printf("Enter the base");
  scanf("%f",&t.base);
  printf("Enter the altitude");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n]){
  for(int i = 0;i < n;i++){
      printf("Enter the value of triangle \n");
      scanf("%d",t[n]);
    }
  }
  
void find_area(Triangle *t){
  float area;
  t -> area = (0.5) * (t -> base) * (t -> altitude);   
}

void find_n_areas(int n, Triangle t[n]){
  Triangle n,i,t[n];
  for(i = 0;i < n;i++){
  printf("Enter the areas \n");
  scanf("%f",&t.area[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle smallest;
  smallest = t.area[0];
  for(i = 0;i < n;i++){
    if(t.area[i] < smallest){
      smallest = t.area[i];
    }
  }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest){
  printf("The area of n triangles are %f",t.area[i]);
  printf("The smallest triangle of all is %f",smallest);
}

int main(){
  Triangle n,issmallest;
  t = Triangle input_triangle();
  input_n_triangles(n ,t);
  find_area(t);
  find_n_areas(n,t);
  issmallest = find_smallest_triangle(n,t);
  output(n , t ,smallest);

}