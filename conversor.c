#include <stdio.h>

int main (){
    int opcion;
    float cantidad, resultado;

    //Tipo de cambio aprox
    float usd_a_gtq = 7.80;
    float eur_a_gtq = 8.45;

    printf ("--- CONVERSOR DE MONEDAS ---\n");
    printf ("1. GTQ a USD\n");
    printf ("2. USD a GTQ\n");
    printf ("3. EUR a GTQ\n");
    printf ("Seleccione una opcion : ");
    scanf ("%d", &opcion);

    printf ("Ingrese la cantidad a convertir : ");
    scanf ("%f", &cantidad);

    switch (opcion)
    {
    case 1:
        resultado = cantidad/usd_a_gtq;
        printf ("%.2f GTQ equivalen a %.2f GTQ \n", cantidad, resultado);
        break;
    case 2 :
        resultado = cantidad * usd_a_gtq;
        printf ("%.2f USD equivalen a %.2f GTQ \n", cantidad, resultado);
        break;
    case 3:
        resultado = cantidad * eur_a_gtq;
        printf ("%.2f EUR equivalen a %.2f GTQ \n", cantidad, resultado);
    default:
        printf ("Opcion no valida \n");
    }

    return 0;
}