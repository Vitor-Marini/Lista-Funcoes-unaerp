#include <stdio.h>
#include <conio.h>

float calc_media();

int main(){
float r;
r = calc_media();
printf("O valor medio digitado foi %f",r);
 return 0;
}


float calc_media(){
float soma=0, num=1, media, i=0;

 while(num != 0)
 {
 printf("\nDigite numeros positivos(digite 0 para parar)");
 scanf("%f", &num);
 soma += num;
 i++;
 }

 media = soma/(i-1);

 return media;
}