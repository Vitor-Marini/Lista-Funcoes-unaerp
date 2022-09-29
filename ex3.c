#include<stdio.h>


int test_primo(int);


int main(){
int v;
printf("Entre um valor inteiro e positivo:");
scanf("%i",&v);  

if(test_primo(v)==1)
    printf("O Valor e primo");
else    
    printf("O Valor nao e primo");

    return 0;
}

int test_primo(int num){

if(num%2==0||num/num==0)
    return 0;
else
    return 1;

    
}