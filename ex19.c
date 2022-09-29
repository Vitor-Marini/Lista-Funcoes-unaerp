#include<stdio.h>

int calcula_divisores(int);


int main(){
int n;

printf("Entre um valor positivo: ");
scanf("%i",&n);

printf("O numero de divisores de: %i e %i",n,calcula_divisores(n));
    return 0;
}

int calcula_divisores(int numero){
int n_divisores=0,i;

 for(int i = numero; i>0; i--)
    {
        if(numero%i==0) n_divisores++;
    }


    return n_divisores;
}