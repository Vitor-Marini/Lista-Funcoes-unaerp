#include<stdio.h>
#include<ctype.h>

float procedimento_notas_aluno(float,float,float,char);

int main(){

float n1,n2,n3,mediaf;
char op;

printf("Escolha entre Media Aritimetica(A),Media Ponderada(P),Media Harmonica(H): ");
scanf("%c",&op);
printf("Entre as notas do aluno: ");
scanf("%f %f %f",&n1,&n2,&n3);
op=toupper(op);
printf("\nA media e:%.2f",procedimento_notas_aluno(n1,n2,n3,op));

    return 0;
}

float procedimento_notas_aluno(float nota1,float nota2,float nota3 ,char opcao){
    float media_final;

    switch (opcao)
    {
    case 'A':
    media_final = ((nota1+nota2+nota3)/3);
        break;
    case 'P':
   media_final =((nota1*5)+(nota2*3)+(nota3*2))/(5+3+2);
        break;
    case 'H':
    media_final = 3/(1/nota1+1/nota2+1/nota3);
        break;
    default:
        printf("Opcao Invalida querido professor");
       
        break;
    }

    return media_final;
}