#include <stdio.h>
// Programa para converter Fahrenheit para Celsius. 
// Capítulo 1

// Fórmula: C= F - 32 / 1,8

void print_table(float a, float b){
    printf("%.2f\t%.2f\n", a, b);
}

float conversion(float fahrenheit){
    return (fahrenheit - 32) / 1.8;
}

void main(){
    int start = 0;
    int add = 20; // Passos
    int max = 300; // Limite

    for (float fahrenheit = start; fahrenheit <= max; fahrenheit += add){
        float celsius = conversion(fahrenheit);
        print_table(fahrenheit, celsius);
    }
}