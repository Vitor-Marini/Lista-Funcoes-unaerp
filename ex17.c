#include<stdio.h>



int procedimento(int *numeros);


int main(){
int numeros[50],i;
for(i=0;i<5;i++){
    printf("Entre os valores inteiro: ");
    scanf("%i",&numeros[i]);
}
 procedimento(numeros);

    return 0;
}

int procedimento(int *numeros){
int i,maior=0,menor=9999;

for(i=0;i<5;i++){

    if(numeros[i]>maior){
        maior=numeros[i];
    }
    if(numeros[i]<menor){
       menor=numeros[i];  
     }
}

    printf("Maior: %i Menor: %i ",maior,menor);
    return 0;
}


