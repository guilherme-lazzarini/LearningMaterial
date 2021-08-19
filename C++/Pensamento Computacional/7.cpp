#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
float salario,per_aumento,novo_salario;
printf("INSIRA O SALARIO ATUAL\n");
scanf("%f",&salario);
printf("INSIRA O AUMENTO PERCENTUAL\n");
scanf("%f",&per_aumento);
novo_salario=salario*(1+(per_aumento/100));
printf("O SALARIO SERÁ: %.2f\n",novo_salario);
system("pause");
}