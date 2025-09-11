#include <stdio.h>

void main()
{
    char input;
    int word_counter = 0;
    int flag = 0;
    while ((input = getchar()) != EOF)
    {
        if (input == 32 && flag == 0){
            flag = 1;
            word_counter++;
        }
        else if (input == '\b'){
            word_counter++;
        }
        else if (input == '\n'){
            word_counter++;
            printf("Palavras: %d", word_counter);
            break;
        }
        else if  (input == 32 && flag == 1){
            flag = 0;
            continue;
        }
        else{
            flag = 0;
        }
    }

}