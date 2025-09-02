#include <stdio.h>
int main() {        /* Função principal do programa */
    int idade = 24; /* Declarando uma variável do tipo inteira, chamada idade e atribuindo o valor 24 a ela */
    float altura = 1.72; /* Declarando uma variável do tipo ponto flutuante chamada altura e atribuindo o valor 1.72 a ela */
    char opcao = 'F'; /* Declarando uma variável do tipo caractere chamada opcao e atribuindo o valor 'F' a ela */
    char nome[24] = "Fillipe";    /* Declarando uma variável do tipo string (array de caracteres) chamada nome e atribuindo o valor "Fillipe" a ela */

    printf ("Olá jogador, digite sua idade: "); /*  Imprimindo a idade do usuário */
    scanf ("%d", &idade);
    printf ("A idade do jogador é: %d\n", idade);
    printf ("Agora digite sua altura jogador: ");
    scanf ("%f", &altura);
    printf ("A altura do jogador é: %.2f\n", altura);
    printf ("Por último, digite sua opção jogador: ");
    scanf (" %c", &opcao);
    printf ("A opção do jogador é: %c\n", opcao);
}



/* %d: Imprime um inteiro no formato decimal.
   %i: Equivalente a %d.
   %f: Imprime um número de ponto flutuante no formato padrão
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
*/

