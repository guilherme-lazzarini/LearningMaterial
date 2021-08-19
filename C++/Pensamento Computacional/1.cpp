#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"Portuguese");
int num_1,num_2,soma,produto;
printf("Insira os Numeros\n");
scanf("%i %i",&num_1, &num_2);
soma=(num_1+num_2);
produto=(num_1*num_2);
printf("\nSOMA: %i\n",soma);
printf("PRODUTO: %i\n",produto);
system("pause");
}