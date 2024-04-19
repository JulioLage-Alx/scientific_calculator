#include <stdio.h>
#include "sinais.h"

int menu() {
   
    char *sinal_1,sina[4]={"="};
    float num_1,*cont;
    int i,sair=10,n=10,fim,exit;

       for ( i = 1; i < sair; i++)
       {
            cont = (float*)calloc(n,sizeof(float));
            sinal_1 = (char*)malloc(1*sizeof(char));
            scanf("%f",&num_1);
            scanf("%s",&sinal_1[1]);
            cont[i]= num_1;
            cont[i] = sinais(sinal_1,cont[i]);
            exit =strncmp(sinal_1,sina[1],1);
            if (exit>0)
            {
                fim = sair +2;
                i = fim;
            }
            sair ++;
            n++;
            free(sinal_1);

       }
        
    return 0;
}
