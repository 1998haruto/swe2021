#include <stdio.h>
int main(){
  char firstname[20];
  char lastname[20];
  int id;
  printf("What is your full name?¥n");
  scanf("%s %s", firstname, lastname);
  printf("What is your student ID?¥n");
  scanf("%d", &id);
  printf("Welcome, %s (student ID:%d)!¥n", firstname, id);

  for(int i = 9; i >= 0; i--){
    printf("%d \n", i);
  }
}



