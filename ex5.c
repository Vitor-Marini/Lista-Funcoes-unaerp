#include<stdio.h>


int transforma_segundos(int,int*,int*,int*);


int main(){
int tempo_inicial,horas,minutos,segundos;

printf("Entre o tempo em segundos: ");
scanf("%d",&tempo_inicial);
transforma_segundos(tempo_inicial,&horas,&minutos,&segundos);
printf("%i:%i:%i\n",horas,minutos,segundos);
return 0;
}

int transforma_segundos(int tempo,int *h,int *m,int *s){
int resto;


*h=tempo/3600;
resto=tempo%3600;
*m= resto/60;
*s=resto%60;


    return 0;
}