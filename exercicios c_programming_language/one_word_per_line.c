#include <stdio.h>

void main(){
    char input;
    while ((input = getchar()) != EOF){
        if (input == 32 || input == '\n' || input == '\b'){
            putchar('\n');
        }
        else {
            putchar(input);
        }
    }
}