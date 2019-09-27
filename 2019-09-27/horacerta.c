#include <stdio.h>
int main(){
  int hora, minuto;
  printf("Digite as horas no padrao HH:MM\n");
  scanf("%d:%d",&hora,&minuto);
  printf("Sao exatamente %d horas e %d minutos\n",hora, minuto);
  return 0;
}
