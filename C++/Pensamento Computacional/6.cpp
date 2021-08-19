#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
setlocale(LC_ALL,"Portuguese");
 float RAIO,AREA,VOLUME;
 printf ("INSIRA O RAIO\n");
 scanf ("%f",&RAIO);
 AREA=4*3,1415*(RAIO*RAIO);
 VOLUME=(4.3,1415*(RAIO*RAIO*RAIO))/3;
 printf ("A AREA É %.2f\n",AREA); 
 printf ("O VOLUME É %.2f\n",VOLUME);
system("pause");
}
