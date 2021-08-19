#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
 float TEMP_F,TEMP_C;
 printf ("INSIRA A TEMPERATURA EM CELSIUS\n");
 scanf ("%f",&TEMP_C);
 TEMP_F=(TEMP_C*9/5)+32;
 printf ("A TEMPERATURA EM FAHNREIT É %.2f\n",TEMP_F);
system("pause");
}
