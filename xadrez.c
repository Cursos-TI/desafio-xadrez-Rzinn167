#include <stdio.h>

void moverTorre(int casas)
{
    if (casas > 0) 
    {
        printf("direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0) 
    {
        printf("cima,direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0) 
    {
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
}


int main() {
    int d, e;
    int torre, bispo, rainha;

        printf("Torre: ");
        scanf("%d", &torre);

    moverTorre(torre);

        printf("Bispo: ");
        scanf("%d", &bispo);

    moverBispo(bispo);
    
        printf("Rainha: ");
        scanf("%d", &rainha);

    moverRainha(rainha);
    

    printf("Cavalo:\n");

    for (d = 1, e = 1; d <= 1 && e <= 1, d++, e--;)
    {
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");    
    }

    return 0;
}
