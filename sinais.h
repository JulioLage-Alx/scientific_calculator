#include <stdio.h>
#include <string.h>
#include "adicao.h"

int Sinais(char sinal[], float numero)
{

    char S[6][6] = {'+','-','*','/','='};
    int ret, cont = 0, exit, i = 0;
    float num_2, soma;

    for (i = 0; i < 4; i++)
    {
        ret = strncmp(sinal, S[i], 1);
        if (ret > 0)
        {
            cont = i;
            break;
        }
    }
    if (cont == 0)
    {
        scanf("%f", &num_2);
        soma = adicao(numero, num_2);
    }
    exit = strncmp(sinal, S[5], 1);
    if (exit > 0)
    {
        printf("%f", soma);
    }

    return soma;
}
