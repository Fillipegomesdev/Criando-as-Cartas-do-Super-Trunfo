#include <stdio.h>

int main(){
printf("Hello World!\n");
return 0;
}



/*O # no início:
Isso indica uma diretiva do pré-processador.
Ou seja, não é código C “de verdade”, mas uma instrução que
o pré-processador resolve antes da compilação.
Pense nisso como: “antes de compilar, substitui isso aqui por um monte de código pronto”.

include:
Significa “inclua o conteúdo de outro arquivo”.
Aqui a gente tá dizendo: “copie o conteúdo do arquivo stdio.h pra cá”.

<stdio.h>:
Esse é o nome do arquivo de cabeçalho (header file).

stdio = Standard Input/Output (entrada e saída padrão).

.h = extensão de header file (arquivo de cabeçalho).
Esse arquivo tem as declarações de funções como printf, scanf, etc.
Sem ele, o compilador não sabe como essas funções são definidas.
*/


/*  Todo programa em C começa a execução pela função main.
int:
Tipo de retorno da função.
Ele indica que essa função (no caso, main) vai devolver um número inteiro no final.
Esse número vai ser usado pelo sistema operacional pra saber se deu certo (0) ou deu errado (qualquer outro número).

main:
Esse é o nome da função especial onde todo programa C começa.
Sempre que você roda um programa em C, o sistema operacional chama essa função primeiro.

():
Os parênteses indicam que é uma função.
Dentro deles você pode declarar parâmetros.

Exemplo avançado: int main(int argc, char *argv[]) permite pegar argumentos da linha de comando.

Mas no início do aprendizado, você pode deixar vazio (()). */




/* printf: É uma função declarada lá no stdio.h.
Serve pra escrever texto na saída padrão (normalmente, a tela do computador).
O “f” vem de formatted porque dá pra formatar valores dentro da string
(tipo números, caracteres, variáveis etc.).

("Hello, World!\n"):
Parênteses = chamando a função.
O que está dentro é o argumento da função (nesse caso, a string).

"Hello, World!\n":
Essa é uma string literal — ou seja, uma sequência de caracteres que fica guardada na memória.
Cada caractere (H, e, l...) ocupa um espaço em memória.
O \n é um caractere especial chamado escape sequence, que significa “nova linha”.

;:
Todo comando em C precisa terminar com ponto e vírgula.
Se esquecer, o compilador reclama.*/


/*As chaves delimitam o bloco de código da função.
Tudo que estiver entre { e } é o que vai ser executado quando a função main for chamada.
Em C, sempre que você define uma função, precisa abrir e fechar chaves pra dizer “aqui está o corpo dela”.
*/