#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int a = 1, b = 1, c, d, e;
    int torre, bispo, rainha, cavalo;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Torre: ");
    scanf("%d", &torre);

    while (a <= torre)
    {
        printf("Direita\n");
        a++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Bispo: ");
    scanf("%d", &bispo);

    do
    {
        printf("Cima,Direita\n");
        b++;
    } while (b <= bispo);
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Rainha: ");
    scanf("%d", &rainha);

    for (c = 1; c <= rainha; c++)
    {
       printf("Esquerda\n");
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Cavalo: \n");

    for (d = 1; d <= 1; d++)
    {
        for (e = 1; e <= 2; e++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");    
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
