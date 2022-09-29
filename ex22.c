#include<stdio.h>

float soma_de_s(int);


int main(){
int n;

printf("Entre um numero inteiro e positivo: ");
scanf("%i",&n);
printf("A soma de S e:%f",soma_de_s(n));

    return 0;
}

float soma_de_s(int valor){
float resultado=1,i;

for(i=2.0;i<=valor;i++){
resultado=resultado + 1.0/i*(i-1);
}
    return resultado;
}