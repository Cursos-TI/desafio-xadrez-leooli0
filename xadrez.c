#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.~

// =====================================================================
// FUNÇÃO: movimentoBispo
// OBJETIVO: Simular o movimento do bispo no tabuleiro.
// O bispo se move na diagonal. Nesta função, a movimentação será limitada
// a no máximo 5 casas (definido como regra interna).
// A função utiliza recursão para simular o movimento casa a casa.
// =====================================================================
void movimentoBispo(int casasAndadas)
{
    if (casasAndadas <= 0)
        return;

    if (casasAndadas > 5)
    {
        casasAndadas = 5;
    }

    // na funcao e usado um for para mostrar o movimento
    for (int i = 0; i < 1; i++)
    { // pode ser mais de 1 se quiser varias casas andadas
        printf("Bispo andou 1 casa na diagonal\n");
    }

    movimentoBispo(casasAndadas - 1); // chamada recursiva
}

// =====================================================================
// FUNÇÃO: movimentoTorre
// OBJETIVO: Simular o movimento da torre no tabuleiro.
// A torre se move em linha reta (horizontal ou vertical).
// Movimento limitado a 5 casas. Cada chamada representa 1 casa andada.
// =====================================================================
void movimentoTorre(int casasAndadas)
{
    if (casasAndadas <= 0)
        return;

    if (casasAndadas > 5)
    {
        casasAndadas = 5;
    }

    // na funcao e usado um for para mostrar o movimento
    for (int i = 0; i < 1; i++)
    { // pode ser mais de 1 se quiser varias casas andadas
        printf("Torre andou 1 casa para o lado\n");
    }

    movimentoTorre(casasAndadas - 1); // chamada recursiva
}

// =====================================================================
// FUNÇÃO: movimentoRainha
// OBJETIVO: Simular o movimento da rainha no tabuleiro.
// A rainha combina os movimentos da torre e do bispo, podendo andar
// em linha reta e diagonal. Aqui, o limite é de 8 casas.
// Cada chamada representa o movimento de 1 casa.
// =====================================================================
void movimentoRainha(int casasAndadas)
{
    if (casasAndadas <= 0)
        return;

    if (casasAndadas > 8)
    {
        casasAndadas = 8; // Limite de 8 casas
    }

    for (int i = 0; i < 1; i++)
    {
        printf("Rainha andou 1 casa\n");
    }

    movimentoRainha(casasAndadas - 1);
}

// =====================================================================
// FUNÇÃO: movimentoCavalo
// OBJETIVO: Simular o movimento do cavalo no tabuleiro.
// O cavalo se move em "L" (dois passos em uma direção e um em outra).
// Neste exemplo, o movimento completo é representado por 2 "baixos" + 1 "direita".
// A função simula apenas um movimento padrão do cavalo.
// =====================================================================
void movimentoCavalo(int movimentoCompleto)
{
    if (movimentoCompleto < 2)
    {
        int movimentoParcial = 0;
        if (movimentoParcial < 2)
        {
            printf("Baixo\n");
            movimentoParcial++;
        }
        if (movimentoParcial < 2)
        {
            printf("Baixo\n");
        }
        printf("Direita\n");
    }
}

// =====================================================================
// FUNÇÃO: movimentoRainha
// OBJETIVO: Simular o movimento da rainha no tabuleiro.
// A rainha combina os movimentos da torre e do bispo, podendo andar
// em linha reta e diagonal. Aqui, o limite é de 8 casas.
// Cada chamada representa o movimento de 1 casa.
// =====================================================================
int main()
{
    // Movimentação das Peças
    // Declaracao das variaveis
    int torre, bispo, rainha, cavalo;
    torre = 0;
    bispo = 0;
    cavalo = 0;

    // Implementação de Movimentação do Bispo
    printf("----- Movimentacao do Bispo -----\n");
    printf("Quantas casas o bispo deve andar?\n ");
    scanf("%d", &bispo);

    if (bispo > 5)
    {
        printf("Bispo pode andar somente 5 casas. Digite Novamente!\n");
    }
    else
    {
        movimentoBispo(bispo);
    }

    // Implementação de Movimentação da Torre
    printf("----- Movimentacao da Torre -----\n");
    printf("Quantas casas a Torre deve andar?\n ");
    scanf("%d", &torre);

    if (torre > 5)
    {
        printf("A Torre pode andar somente 5 casas. Digite Novamente!\n");
    }
    else
    {
        movimentoTorre(torre);
    }

    // Implementação de Movimentação da Rainha
    printf("----- Movimentacao da Rainha -----\n");
    printf("Quantas casas a Rainha deve andar?\n ");
    scanf("%d", &rainha);

    if (rainha > 8)
    {
        printf("A Rainha pode andar somente 8 casas.\n");
        rainha = 8;
    }
    movimentoRainha(rainha);

    // Implementação Movimentação do Cavalo
    printf("----- Movimentacao do Cavalo -----\n");
    printf("Digite a quantidade de casas que o cavalo anda: \n");
    scanf("%d", cavalo);

    movimentoCavalo(cavalo);

    return 0;
}
