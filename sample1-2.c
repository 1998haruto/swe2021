#include <stdio.h>
int main(){
    int i = 10;
    float j = 10.5;
    char k = 'a';
    i = i / 3;
    j = j / 5;
    k = k += 1;
    printf("i = %d \n", i);
    printf("j = %f \n", j);
    printf("k = %c \n", k);
}