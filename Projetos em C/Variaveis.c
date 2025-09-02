#include <stdio.h> /* Esse #include é um comando pro pré-processador (uma fase antes da compilação).
Ele fala: “traga pra cá o conteúdo do arquivo stdio.h”.
O stdio.h é um header file (arquivo de cabeçalho) que contém funções prontas de entrada e saída (standard input/output). 
Dentro dele está a declaração da função printf, que é a que usamos pra escrever coisas na tela.
Sem esse include, o compilador não sabe o que diabos é printf.*/

int main() {      
    int idade = 24; /* Declarando uma variável do tipo inteira, chamada idade e atribuindo o valor 24 a ela */
    float altura = 1.72; /* Declarando uma variável do tipo ponto flutuante chamada altura e atribuindo o valor 1.72 a ela */
    char opcao = 'F'; /* Declarando uma variável do tipo caractere chamada opcao e atribuindo o valor 'F' a ela */
    char nome[24] = "Fillipe";    /* Declarando uma variável do tipo string (array de caracteres) chamada nome e atribuindo o valor "Fillipe" a ela */

    printf ("A idade do %s é: %d \n", nome, idade); /*  Imprimindo a idade do usuário */
    printf("A altura é : %f\n", altura); 
    printf("A opção é: %c\n", opcao);


    
    return 0; /* Retornando 0 para indicar que o programa terminou com sucesso */
}



/* %d: Imprime um inteiro no formato decimal.
   %i: Equivalente a %d.
   %f: Imprime um número de ponto flutuante no formato padrão
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
*/

