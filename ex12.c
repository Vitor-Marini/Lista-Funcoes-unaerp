#include<stdio.h>

int calculo_tempo_jogo(int,int,int,int);

int main(){
int hi,mi,hf,mf;
printf("Entre as horas e minutos iniciais do jogo:(HH:MM) ");
scanf("%i %i",&hi,&mi);
printf("Entre as horas e minutos finais do jogo:(HH:MM) ");
scanf("%i %i",&hf,&mf);
calculo_tempo_jogo(hi,mi,hf,mf);

    return 0;
}

int calculo_tempo_jogo(int horas_i,int minutos_i,int horas_f,int minutos_f){
int hora_total,minuto_total;

if(horas_i<horas_f)
hora_total=horas_f-horas_i;
else
hora_total=(horas_f+24)-horas_i;

if(minutos_i>minutos_f)
hora_total=hora_total-1;

if(minutos_i<minutos_f)
minuto_total=minutos_f-minutos_i;
else
minuto_total=(minutos_f)-minutos_i;


printf("\n%i:%i",hora_total,minuto_total);
    return 0;
}
