/* Write a program to find out the mood of a Camel 
Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.
input : 5 2 4  output  : The Camel is Happy  */

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(){
  float radius,height,length;
  int mood;
  input_camel_details(&radius,&height,&length);
  mood = find_mood(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter radius,height and length\n");
  scanf("%f %f %f",radius,height,length);
  
}

int find_mood(float radius, float height, float length){
  int mood;
  if(radius < height && radius < length){
    return 1;
    }
  else if(height < length && height < radius){
    return 2;
  }
  else if(length < height && length < radius){
    return 3;
    }
  return mood;
}

void output(float radius, float height, float length, int mood){
  if(mood == 1){
    printf("The camel is sick");
  }
  else if(mood == 2){
    printf("The camel is happy");
  }
  else if(mood == 3){
    printf("The camel is tense");
  } 
  /* else{
    printf("unknown");
  } */
}
