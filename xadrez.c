#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Declaracao das variaveis
    int torre, bispo, rainha, cavalo;
    torre = 0;
    bispo = 0;

    // Implementação de Movimentação do Bispo
    printf("----- Movimentacao do Bispo -----\n");
    while (bispo < 5)
    {
        printf("Cima Direita\n"); // imprime na tela a direcao do movimento cinco vezes
        bispo++;                  // realiza o incremento na variavel
    }

    // Implementação de Movimentação da Torre
    printf("----- Movimentacao da Torre -----\n");
    do
    {
        printf("Direita\n"); // imprime na tela a direcao do movimento cinco vezes
        torre++;             // realiza o incremento na variavel
    } while (torre < 5);

    // Implementação de Movimentação da Rainha
    printf("----- Movimentacao da Rainha -----\n");
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda\n"); // imprime na tela a direcao do movimento oito vezes
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("----- Movimentacao do Cavalo -----\n");
    // loop aninhado que imprime na tela a movimentação do cavalo
    for (int cavalo = 1; cavalo < 2; cavalo++)
    {
        for (int movimentoParcial = 0; movimentoParcial < 2; movimentoParcial++)
        {
            printf("Baixo\n"); // imprime na tela "baixo" duas vezes
        }
        printf("Direita\n"); // imprime na tela "direita" somente uma vez
    }

    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
