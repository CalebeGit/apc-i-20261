#include <stdio.h>

int main() {
    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // && => 0 false E qualquer coisa = sempre falso
    printf("voce eh uma crianca? %i", 
        idade >= 0 && idade <= 12);
    

    //|| => 1 verdadeiro OU qualquer coisa = verdade sempre
    printf("voce tem prioridade para vacinar? %i\n", 
        idade <= 6 || idade >= 60);

    // ! => NAO Verdadeiro = Falso, NAO falso = Verdadeiro
    printf("voce naum pode votar? %i\n", !(idade >= 16));


    return 0;
}