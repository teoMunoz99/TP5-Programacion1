#include <stdio.h>

void invertirNumero(int numero);

int main(){
    int numero;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &numero);

    invertirNumero(numero);

    return 0;
}

void invertirNumero(int numero){
    int invertido = 0, ultimoDigito = 0, impares = 0;
    while (numero > 0)
    {
        ultimoDigito = numero % 10;
        invertido = invertido * 10 + ultimoDigito;
        if((ultimoDigito % 2) != 0){
            impares = impares + 1;
        }
        numero = numero / 10;
    }

    printf("Numero invertido: %d \n", invertido);
    printf("Cantidad de impares: %d \n", impares);
    getchar();
}