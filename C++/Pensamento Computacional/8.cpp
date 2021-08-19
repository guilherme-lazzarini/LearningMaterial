#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
setlocale(LC_ALL,"Portuguese");
float c1,c2,h;
printf("INSIRA O VALOR DOS CATETOS\n");
scanf("%f" "%f",&c1,&c2);
h=sqrt((c1*c1)+(c2*c2));
printf("A HIPOTENUSA É: %.2f\n",h);
system("pause");
}