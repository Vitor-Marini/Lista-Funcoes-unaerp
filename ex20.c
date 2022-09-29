#include<stdio.h>


int somatoria(int);


int main(){

int v,v_final;
printf("Entre um numero inteiro  e positivo:");
scanf("%i",&v);

printf("A somatoria e:%i",somatoria(v));

    return 0;
}

int somatoria(int valor){
int soma=0;
for (int i=0;i<=valor; i++)
{
    soma+=i;
}

return soma;
}
