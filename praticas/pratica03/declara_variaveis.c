#include <stdio.h>

int main() {
    
    int idade;
    char sexo;
    float altura;
    double peso;
    
   
    idade = 25;
    sexo = 'F'; 
    altura = 1.75f;  
    peso = 72.845;    
    
   
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f metros\n", altura); 
    printf("Peso: %.3f kg\n", peso);         
    
    
    printf("\nResumo: Idade=%d, Sexo=%c, Altura=%.2f, Peso=%.3f\n", 
           idade, sexo, altura, peso);
    
    return 0;
}