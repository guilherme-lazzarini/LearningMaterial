#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
float B, H, A;
printf("digite o valor da base:");
scanf("%f",&B);
printf("digite o valor da altura:""");
scanf("%f",&H);
A=(B*H)/2;
printf("\n O valor da area é %f",A);
system("pause");
}