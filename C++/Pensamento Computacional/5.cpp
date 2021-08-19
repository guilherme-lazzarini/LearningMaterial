#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
setlocale(LC_ALL,"Portuguese");
 float RAIO,AREA,PI;
 printf ("INSIRA O RAIO DO CIRCULO\n");
 scanf ("%f",&RAIO);
 AREA=(RAIO*RAIO)*3,1415;
 printf ("A AREA DO CIRCULO É %.4f\n",AREA);
system("pause");
}