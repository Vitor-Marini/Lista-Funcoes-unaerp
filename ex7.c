#include<stdio.h>

int test_perfeito(int);

int main(){
int v,u;

printf("Entre um valor: ");
scanf("%i",&v);

u=test_perfeito(v);
if(u==1)
    printf("Numero perfeito");
else
    printf("Numero nao perfeito");
    return 0;
}


int test_perfeito(int valor){  
int i,soma=0,resto;

for(i=1;i<=(valor-1);i++){
    resto =valor%i;
    if(resto==0)
    soma+=i;
}

if(soma==valor)
    return 1;
else
    return 0;
}