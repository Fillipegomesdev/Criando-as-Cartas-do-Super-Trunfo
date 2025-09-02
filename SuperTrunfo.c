#include <stdio.h>

int main() {
    // Carta 1
    char estado;
    char codigo1[4]; // Exemplo: "A01"
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para Carta 1
    printf("Carta 1: \n"); // Aqui ira aparecer a carta 1 na tela do usuario no terminal como uma descricao"
    printf("Estado: \n");
    scanf("%c",estado);
    printf("Codigo: \n");
    scanf("%s", codigo1);
    return 0;
}


/* %d: Imprime um inteiro no formato decimal.
   %i: Equivalente a %d.
   %f: Imprime um número de ponto flutuante no formato padrão
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
*/