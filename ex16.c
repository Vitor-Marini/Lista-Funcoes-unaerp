#include<stdio.h>

float calcula_fatorial(int);

int main(){
int num;
printf("Entre um numero inteiro e positivo: ");
scanf("%i",&num);
printf("O fatorial do numero %i e: %f",num,calcula_fatorial(num));

    return 0;
}


float calcula_fatorial(int numero){
float fatorial,i;
    fatorial = 1,i;
    for(i=numero;i>0;i--)
    {
        fatorial = fatorial*i;
    }

    return fatorial;
}
