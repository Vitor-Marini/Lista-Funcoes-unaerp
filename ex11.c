#include<stdio.h>

void ordena_crescent(int,int,int);

int main(){
int n1,n2,n3;
printf("Entre tres valores inteiros: ");
scanf("%i %i %i",&n1,&n2,&n3);
ordena_crescent(n1,n2,n3);

    return 0;
}

void ordena_crescent(int a,int b,int c){

 if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("%d %d %d", a, b, c);


    return NULL;
}