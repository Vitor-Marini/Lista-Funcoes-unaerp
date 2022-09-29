#include<stdio.h>

int verifica_impar_par(int);

int main(){
int valor;
printf("Entre com um valor a ser verificado: ");
scanf("%i",&valor);

if(verifica_impar_par(valor)==0)
    printf("O valor %i e impar \n",valor);
else
    printf("O valor %i e par\n",valor);

    return 0;
}

int verifica_impar_par(int valor){
int resultado;
if(valor % 2 ==0)
    resultado=1;
else
    resultado=0;

    return resultado;
}