// Write a program to reverse a string.
// input : hello
// output : olleh

#include<stdio.h>
#include<string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void input_string(char *a){
  char a;
  printf("Enter the string \n");
  scanf("%s",&a);  
}

void str_reverse(char *str, char *rev_str){
  gets(str);
  strrev(str);
}

void output(char *a, char *reverse_a){
  printf("%s",strrev);
}

int main(){
  input_string();
  str_reverse();
  output();
}