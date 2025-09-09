#include <stdio.h>

void main(){
    char input;

    while ((input = getchar()) != EOF){
        if (input == 9){ // 9 = TAB
            putchar('\\');
            putchar('t');
        }
        else if (input == 32){ // 32 = BACKSPACE
            putchar('\\');
            putchar('b');
        }
        else {
            putchar(input);
        }
    }
}