#include<stdio.h>

void pesquisa_hab();

int main(){

pesquisa_hab();

    return 0;
}

void pesquisa_hab(){
int qtd_filhos,qtd_total_filhos=0;    
float salario,media_salario,soma_menor_salario,habitantes=0,soma_salario=0,maior_salario=0,porcento=0,media_filhos;
int aux=1;
do
{
   printf("Digite o seu salario: ");
   scanf("%f",&salario);
if(salario>=0){
    habitantes++;
    soma_salario=soma_salario+salario;
    media_salario=soma_salario/habitantes;
    if(maior_salario<salario)
    maior_salario=salario;
    if(salario<=350){
        soma_menor_salario=soma_menor_salario+salario;
        porcento++;
    }
    printf("Digite a quantidade de filhos");
    scanf("%i",&qtd_filhos);
    qtd_total_filhos=qtd_filhos+qtd_total_filhos;
    media_filhos=qtd_total_filhos/habitantes;
    printf("Quer continuar(1=SIM/0=NAO)");
    scanf("%i",&aux);
}

} while (aux== 1);

printf("Media do salarios:R$%.2f\n",media_salario);
printf("Media de filhos:%2.f\n",media_filhos);
printf("Maior salario: %f\n",maior_salario);
printf("Percentual de pessoas com salario ate R$350,00: %.1f\n",(porcento/habitantes)*100);


    return NULL;
}