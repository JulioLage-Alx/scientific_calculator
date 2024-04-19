#include <stdio.h>

int menu() {
    int choice;
    float n,m;

    printf("Menu:\n");
    printf("1. Adição\n");
    printf("2. Subritacao\n");
    printf("3. Mutiplicacao\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Entre com o primeiro numero\n");
            scanf("%f",&n);
            printf("Entre com o segundo numero\n");
            scanf("%f",&m);
            printf("%f",m+n);
            break;
        case 2:
             printf("Entre com o primeiro numero\n");
            scanf("%f",&n);
            printf("Entre com o segundo numero\n");
            scanf("%f",&m);
            printf("%f",m-n);
            break;
        case 3:
             printf("Entre com o primeiro numero\n");
            scanf("%f",&n);
            printf("Entre com o segundo numero\n");
            scanf("%f",&m);
            printf("%f",m*n);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
