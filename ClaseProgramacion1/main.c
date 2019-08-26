#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    char tipo; //p, l, b, d
    int contador;
    int mayorDolar;
    int flag = 0;
    int acumPesos = 0;
    int contPesos = 0;
    float promedio;
    float porcentaje;
    float cuenta;


    contador = 0;

    while(contador < 5){

        printf("Ingrese dinero:");
        scanf("%d",&dinero);
        fflush(stdin);
        printf("Ingrese tipo:");
        scanf("%c",&tipo);

        while(tipo != 'p' && tipo != 'd' && tipo != 'l' && tipo != 'b'){
            printf("Ingrese un tipo valido:");
            scanf("%c",&tipo);
        }

        if(tipo == 'd' && mayorDolar < dinero || flag == 0){

            mayorDolar = dinero;
            flag = 1;
        }

        if(tipo == 'p'){
            acumPesos = dinero + acumPesos;
            contPesos++;
        }

        contador++;
    }

    promedio = (float)acumPesos / (float)contPesos;

    cuenta = contPesos * acumPesos;
    porcentaje = cuenta / 100;

    printf("el mayor dolar es:%d",mayorDolar);
    printf("el promedio de pesos es:%f",promedio);
    printf("el porcentaje de pesos es:%f",porcentaje);

    return 0;
}

/**



**/

