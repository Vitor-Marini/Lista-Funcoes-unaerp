#include<stdio.h>

float peso_ideal(float,char);

int main(){
float alt;
char sexo;

printf("Entre seu sexo(F/M): ");
scanf("%c",&sexo);
printf("Entre sua altura");
scanf("%f",&alt);

printf("O seu peso ideal e: %.2f\n",peso_ideal(alt,sexo));

return 0;
}

float peso_ideal(float altura,char sexo){

return (sexo == 'M') ? 72.7*altura - 58 : 62.1*altura - 44.7;
}