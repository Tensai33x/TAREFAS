#include <stdio.h>
#include <stdlib.h>

void soma() {
    float a1, b1, res;
    printf("Escreva um numero \n");
    scanf("%f", &a1);
    printf("Escreva um numero \n");
    scanf("%f", &b1);
    res = a1 + b1;
    printf("Os numeros escolhidos foram %.1f, %.1f e o resultado sera %.1f.\n", a1, b1, res);
    system("pause");
    system("cls");
    menu();
}
void subtrai()
{
    float a1, b1, res;
    printf("Escreva um numero \n");
    scanf("%f", &a1);
    printf("Escreva um numero \n");
    scanf("%f", &b1);
    res = a1 - b1;
    printf("Os numeros escolhidos foram %.1f, %.1f e o resultado sera %.1f.\n", a1, b1, res);
    system("pause");
    system("cls");
    menu();
}

void divide()
{
    float a1, b1, res;
    printf("Escreva um numero \n");
    scanf("%f", &a1);
    printf("Escreva um numero \n");
    scanf("%f", &b1);
    res = a1 / b1;
    printf("Os numeros escolhidos foram %.1f, %.1f e o resultado sera %.1f.\n", a1, b1, res);
    system("pause");
    system("cls");
    menu();
}

void multiplica()
{
    float a1, b1, res;
    printf("Escreva um numero \n");
    scanf("%f", &a1);
    printf("Escreva um numero \n");
    scanf("%f", &b1);
    res = a1 * b1;
    printf("Os numeros escolhidos foram %.1f, %.1f e o resultado sera %.1f.\n", a1, b1, res);
    system("pause");
    system("cls");
    menu();
}

void menu()
{
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao:   ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1:
            soma();
            break;

        case 2:
            subtrai();
            break;

        case 3:
            divide();
            break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
            break;

        default:
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu();
         
    }
}


int main()
{
    menu();
    system("pause");
    return 0;
}
