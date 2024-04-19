#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display();
/* void printsf(float *n, int size); Declaracao das funcoes printsf e printsc
void printsc(char *c, int size); */


int main(){
    display();
    return 0;
}

void display(){
    float *num_arr = malloc(256 * sizeof(float)); //Alocando um espaco da memoria para o array de floats
    char *op_arr = malloc(256 * sizeof(float)); //Alocando um espaco da memoria para o array de operacoes
    char _op; //Caractere temporaria
    int size = 1; //Tamanho do array atual
    for(int i = 0; _op != '='; i++){
        printf("Digite um numero: ");
        scanf("%f", &num_arr[i]);
        printf("Agora a operacao desejada: ");
        scanf(" %c", &_op);
        op_arr[i] = _op;
        size++;
    }
    // printsf(num_arr, size); Funcao para printar os numeros colocados
    // printsc(op_arr, size); Funcao para printar as operacoes colocadas
    free(num_arr); //Liberando a memoria
    free(op_arr); //Liberando a memoria
    //Vamos retornar as variaveis dessa funcao, que sao:
    //num_arr [array dos numeros digitados]
    //op_arr [array das operacoes digitadas]
    //size [essa variavel foi colocada para testar, nao sei se vamos utilizar no produto final]
}

/* void printsf(float *num_arr, int size) {
    printf("Valores inseridos:\n");
    for (int i = 0; i < size-1; i++) {
        printf("%.2f\n", num_arr[i]);
    }
}

void printsc(char *op_arr, int size) {
    printf("Operacoes inseridas:\n");
    for (int i = 0; i < size-2; i++) {
        printf("%c\n", op_arr[i]);
    }
} Comentado pois esta aqui para testar */ 
