#include <stdio.h>
int main(){
   int   valor1;
   float valor2;
   printf("Digite Algo Inteiro:");
   scanf("%d",&valor1);

   printf("Digite algo real:");
   scanf("%f", &valor2);

   printf("Voce digitou os valores %5d e %8.2f\n",valor1, valor2);
   return 0;
}
