#include<stdio.h>
int main(){
    char op;
    int operando1, operando2;

    printf("Qual operacao realizar ?\n");
    scanf("%c", &op);
    printf("Qual o primeiro operando ?\n");
    scanf("%d", &operando1);
    printf("Qual o primeiro operando ?\n");
    scanf("%d", &operando2);

    switch (op){

        case '+':
            printf("%d + %d = %d", operando1, operando2, operando1 + operando2);
            break;
        case '-':
            printf("%d - %d = %d", operando1, operando2, operando1 - operando2);
            break;
        case '*':
            printf("%d * %d = %d", operando1, operando2, operando1 * operando2);
            break;
        case '/':
            printf("%d / %d = %d", operando1, operando2, operando1 / operando2);
            break;
    }

    return 0;
}