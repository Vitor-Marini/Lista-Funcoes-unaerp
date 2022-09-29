#include<stdio.h>

void indentifica_triangulo(float,float,float);


int main(){
float l1,l2,l3;

printf("Entre os tres lados do triangulo: ");
scanf("%f %f %f",&l1,&l2,&l3);
indentifica_triangulo(l1,l2,l3);

    return 0;
}

void indentifica_triangulo(float l1,float l2,float l3){


if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2){
    if((l1=l2)&&(l2==l3))
     printf("equilatero");
        else if(l1!=l2&&l1!=l3&&l2!=l3)
            printf("Escaleno");
                else
                 printf("Isosiles");
}else   
    printf("Nao tem como");

    return NULL;
}