#include <stdio.h>

// Programa para filtrar espaços duplos em strings

void main(){
    char input;
    int prev = 0; // Verifica se já houve um espaço em branco anteriormente.
    while ((input = getchar()) != EOF){ // Enquanto não for o END-OF-FILE continuar recebendo inputs
        if (input == 32){
            if (prev == 0){ 
                putchar(input);
                prev = 1; // Incrementa ao encontrar um espaço em branco
            }
            else if (prev == 1){
                prev = 0; // Reinicia o estado do verificador
                continue; // Se for encontrado um espaço em branco pular esta interação
            }
        }
        else {
            prev = 0; // Garante que espaços não adjacentes se acumulem 
            putchar(input);
        }
    }   
}