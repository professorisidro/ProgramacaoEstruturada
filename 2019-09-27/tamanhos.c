#include <stdio.h>
int main(){
   int a;
   printf("O int    ocupa %ld bytes\n", sizeof(int));
   printf("O float  ocupa %ld bytes\n", sizeof(float));
   printf("O double ocupa %ld bytes\n", sizeof(double));
   printf("O long   ocupa %ld bytes\n", sizeof(long));
   printf("O short  ocupa %ld bytes\n", sizeof(short));
   printf("O char   ocupa %ld bytes\n", sizeof(char));
   return 0;
}
