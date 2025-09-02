#include <stdio.h> // Biblioteca padrão de entrada e saída  

int main(){ // Função principal
    int idade, matricula;  // Variáveis para armazenar idade e matrícula do tipo inteiro
    float altura;  // Variável para armazenar altura
    char nome[30];  // Variável para armazenar nome

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Altura do aluno: %.2f\n", altura);
    printf("Idade do aluno: %d\n", idade);
    printf("Matrícula do aluno: %d\n", matricula);

    return 0;
}



/* %d: Imprime um inteiro no formato decimal.
   %i: Equivalente a %d.
   %f: Imprime um número de ponto flutuante no formato padrão
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
*/