#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    int opc;
    float temp, fahrenheit, km, milhas;

    setlocale(LC_ALL, "portuguese_Brazil");

    do{
        printf("Calculadora de convers�es: Escolha uma op��o: \n");
        printf("----------------------------------------------\n\n");

        printf("1 - Celsius para Fahrenheit: \n");
        printf("2 - Quil�metros para Milhas: \n");
        printf("3 - Sair \n");
        scanf("%d", &opc);
        system("cls");
        

        switch(opc){
            case 1:
                printf("Informe o valor que deseja converter: ");
                scanf("%f", &temp);
                system("cls");

                fahrenheit = (temp * 1.8) + 32;

                printf("\n%.1f�C equivale a %.1f�F \n\n", temp, fahrenheit);
            break;

            case 2:
                printf("Informe o valor que deseja converter: ");
                scanf("%f", &km);
                system("cls");

                milhas = km / 1.609;

                printf("\n%.1fKm equivale a %.2fMi \n\n", km, milhas);
            break;

            case 3:
                printf("Saindo... \n\n");
            break;

            default :
                printf("Op��o inv�lida! \n\n");
            break;
        }

    } while(opc != 3);

    int getch();
    return 0;
}