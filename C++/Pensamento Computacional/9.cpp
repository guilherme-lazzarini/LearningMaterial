#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
float area,b1,b2,altura;
printf("INSIRA OS VALORES DAS BASES\n");
scanf("%f" "%f",&b1,&b2);
printf("INSIRA A ALTURA\n");
scanf("%f",&altura);
area=(b1+b2)*altura;
printf("A AREA DO TRAPEZIO É: %.2f\n",area);
system("pause");
}
