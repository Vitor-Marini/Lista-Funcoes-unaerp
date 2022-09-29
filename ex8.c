#include<stdio.h>

int verifica_numero(float);

int main(){
float valor;
printf("Entre o valor a ser verificado: ");
scanf("%f",&valor);
if(verifica_numero(valor)==0)
    printf("O valor %.2f e negativo\n",valor);
else
    printf("O valor %.2f e positivo\n",valor);

    return 0;
}


int verifica_numero(float valor){
int resultado;
if(valor<0)
resultado = 0;
else
resultado = 1;

return resultado;
}