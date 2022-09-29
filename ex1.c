#include<stdio.h>
#include<math.h>

float calculo_esfera(float);

int main(){

float raio,volume;

printf("Entre o raio da esfera: ");
scanf("%f",&raio);
volume = calculo_esfera(raio);
printf("O volume da esfera e: %.2f",volume);
    return 0;
}


float calculo_esfera(float r){
return (4*3.14*(pow(r,3)))/3;
}

