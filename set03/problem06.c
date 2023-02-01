// Write a program to find the index of a substring of a string
// input : helloworldhello     world    output :The index of 'world' in 'helloworldhello' is 5

#include<stdio.h>
#include<string.h>

int main(){
  char string,substring;
  char a = input_string();
  char b = input_string();
  int index;
  index = sub_str_index(&string,&substring);
  output(string,substring,index);
  return 0;
  }

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

void input_string(char* a, char* b){
  printf("Enter the a string ");
  scanf("%s",a);
  printf("Enter the b substring");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring){
  int index = -1;
  for(int i = 0;str[i] != '\0' ; i++)
    {
      index = -1;
      for(int j = 0;substr[i] != '\0';j++){
        if(str[i + j] != substr[j]){
          index = -1;
          break;
        }
        index = i;
      }
    }
  return index;
}

void output(char *string, char *substring, int index){
  if(index != -1){
    break;
  }
printf("The index of %s in %s i %d is",string,substring,index);
  }

