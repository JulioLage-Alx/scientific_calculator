#include <stdio.h>
#include <string.h>
#include "adicao.h"

int sinais(char sinal[],float numero){

    char sinais[5][5]={"+","-","*","/",'='};
    int ret,cont=0,exit;
    float num_2,soma;

    for (int i = 0; i < 4; i++)
    {
        ret =strncmp(sinal,sinais[i],1);
        if (ret>0)
        {
            cont = i;
            break;
        }
    }
    if (cont == 1){
        scanf("%f",&num_2);
        soma = adicao(numero,num_2);
    }
    exit =strncmp(sinal,sinais[5],1);
    if (exit > 0){
        printf("%f",soma);
    }
    
    return soma;
}
