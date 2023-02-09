// write a program to count the number of words in a string using strtok (_string.h_)
// input : hello world hello
// output: The number of words in "hello world hello" is 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
  char a;
  int count,no_words;
  input_string(&a);
  count = count_words(&string);
  output(string,no_words);
  return 0;
}

void input_string(char *a){
  char text;
  printf("Enter ");
  scanf("%s",&text);
}

int count_words(char *string){
  int count = 0;
  char* token = strtok(string," ");
  while(token != NULL){
    count++;
    token = strtok(NULL," ");
  }
  return count;  
}

void output(char *string, int no_words){
  printf("The number of words in  %s is %d",string,no_words);
}