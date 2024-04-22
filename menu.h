#include <stdio.h>
#include <stdlib.h>
#include "sinais.h"

int menu() {
   
    char *sinal_1,sina[]={"="};
    float num_1,*cont;
    int i,sair=10,n=10,fim,exit=0;

       for ( i = 1; i < sair; i++)
       {
            cont = (float*)calloc(n,sizeof(float));  
            sinal_1 = (char*)malloc(1*sizeof(char));
            scanf("%f",&num_1);
            fgets(sinal_1[0],1,stdin);
            sinal_1[strcspn(sinal_1,"\n")]=0;
            cont[i]= num_1;
            cont[i] = Sinais(sinal_1,cont[i]);
            exit =strncmp(sinal_1,sina,0);
            if (exit>0)
            {
                fim = sair + 2;
                i = fim;
            }
            sair ++;
            n++;
            free(sinal_1);

       }
        
    return 0;
}
