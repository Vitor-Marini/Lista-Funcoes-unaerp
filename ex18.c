#include<stdio.h>

void taboada(int);

int main(){
int n;
printf("Entre um numero para tabuar: ");
scanf("%i",&n);
taboada(n);
    return 0;
}




void taboada(int valor){
int i,j=1;

for(i=1;i<=valor;i++){
    
printf("%ix%i = %i\n",j,i,j*i);

}
}