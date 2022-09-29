#include<stdio.h>



int procedimento_baskara(float,float,float,float*,float*);


int main(){
float a,b,c,x1,x2;
int tem_solu;
printf("Entre o valor dos termos: ");
scanf("%f %f %f",&a,&b,&c);

tem_solu=procedimento_baskara(a,b,c,&x1,&x2);
if(tem_solu==1)
printf("A solucao e x1: %f x2: %f",x1,x2);
else
printf("Nao tem soulçao real!!\n");
    return 0;
}

int procedimento_baskara(float a,float b,float c,float *x1,float *x2){
float delta;

delta = b*b - 4*a*c;
 
 if(delta <=0)
 return 0;
 
*x1 = (-b + sqrt(delta)) / (2*a);
*x2 = (-b - sqrt(delta)) / (2*a);
return 1;
  
}

