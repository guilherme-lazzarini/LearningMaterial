#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
int num,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
printf("INSIRA O NUMERO DO QUAL DESEJA A TABUADA\n");
scanf("%d",&num);
r1=num*1;
r2=num*2;
r3=num*3;
r4=num*4;
r5=num*5;
r6=num*6;
r7=num*7;
r8=num*8;
r9=num*9;
r10=num*10;
printf("%d %d %d %d %d %d %d %d %d %d\n",r1,r2,r3,r4,r5,r6,r7,r8,r9,r10);
system("pause");
}