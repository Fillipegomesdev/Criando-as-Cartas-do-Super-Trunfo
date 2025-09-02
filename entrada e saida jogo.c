#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int idade;
    float altura;
    char opcao;
    char nome[24];

    srand(time(NULL)); // inicializa o gerador de números aleatórios

    printf("Digite seu nome caçador: ");
    scanf("%s", nome);

    printf("Ola %s, digite sua idade caçador: ", nome);
    scanf("%d", &idade);

    printf("Agora digite sua altura caçador: ");
    scanf("%f", &altura);

    printf("Escolha sua classe caçador (G = Guerreiro, M = Mago, A = Assassino, F = Fortificador): ");
    scanf(" %c", &opcao);

    printf("\n=== CAÇADOR CRIADO ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    if (opcao == 'F') {
        printf("Classe: Guerreiro!\n");
    } else if (opcao == 'M') {
        printf("Classe: Mago!\n");
    } else {
        printf("Classe: Caçador sem classe!\n");
    }

    printf("\n=== PRIMEIRA MISSAO ===\n");
    int inimigo = rand() % 10 + 1; // força do inimigo
    int forca = idade % 10; // "força" baseada na idade só pra brincar

    printf("Um inimigo apareceu com forca %d!\n", inimigo);
    if (forca > inimigo) {
        printf("Voce derrotou o inimigo! Vitoria!\n");
    } else {
        printf("Voce foi derrotado... Fim de jogo!\n");
    }

    return 0;
}
