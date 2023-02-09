/* Write program to find the weight of a truck load of n camels.

Take inputs for:- truck weight - height, radius and length of n different camels
total_truck_weight = truck_weight + weight_of_camels
Enter the number of camels: 3
Enter the height of camel no. 1:1
Enter the length of camel no. 1:1
Enter the radius of camel no. 1:1
Enter the height of camel no. 2:1
Enter the length of camel no. 2:1
Enter the radius of camel no. 2:1
Enter the height of camel no. 3:1
Enter the length of camel no. 3:1
Enter the radius of camel no. 3:1
Enter the weight of the truck:2000
***Output : The Total weight of the truck is: 2009.424561 */

#include<stdio.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){

  return 0;
}

void input(int n, Camel c[n], float *truck_weight){
  for(int i = 1; i < n;i++){
    printf("Enter the height , length and radius of camel");
    scanf("%d %d %d",&c[height],&c[length],&c.[radius]);
  }
  printf("Enter the weight of truck");
  scanf("%d",truck_weight);
}

void find_camel_weight(int n, Camel c[n]){
  
  
}
