#include<stdio.h>


int anos_para_dias(int,int,int);

int main(){
int a,m,d;
printf("Entre os anos, meses e dias:");
scanf("%i %i %i",&a,&m,&d);

printf("A idade em dias e:%i",anos_para_dias(a,m,d));

    return 0;
}

int anos_para_dias(int anos,int meses,int dias){
    return anos*365+meses*31+dias;
}