#include<stdio.h>
#include<math.h>
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

for(i=3.0;i<=valor;i++){
resultado=pow(i,2)+1;
resultado=resultado /i+3;
}
    return resultado;
}