#include<stdio.h>

float calculo(float,float);


int main(){
float n1,n2;
printf("Entre dois valores: ");
scanf("%f %f",&n1,&n2);
printf("O resultado e %.2f\n ",calculo(n1,n2));

    return 0;
}

float calculo(float x,float z){
float resultado=1,i;

for (i=1;i<=z;i++){
    resultado=resultado*x;
}
  
    return resultado;
}