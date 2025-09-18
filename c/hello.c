/* ===============================================
   Arquivo: c/hello.c
   Objetivo: Imprimir uma mensagem no console.
   Como compilar (Windows):
     - CMD:       gcc c\hello.c -o hello.exe
     - PowerShell: gcc c/hello.c -o hello.exe
   Como executar:
     - CMD:       .\hello.exe
     - PowerShell: .\hello.exe
   Pré-requisitos: GCC instalado (MinGW-w64/MSYS2) e no PATH.
   =============================================== */

#include <stdio.h>      // Inclui a biblioteca padrão de I/O (Input/Output).
                        // Ela declara a função printf, usada para imprimir texto.

int main(void) {        // Função principal. Todo programa em C começa por aqui.
                        // 'int' é o tipo de retorno (um número inteiro para o SO).
                        // 'void' indica que main não recebe argumentos.

    printf("Hello, C!\n"); // Chama printf (da stdio.h) para escrever no console.
                           // '\n' é quebra de linha (newline).

    return 0;            // Retorna 0 para o sistema operacional indicando sucesso.
                         // Qualquer valor diferente de 0 costuma representar erro.
}
