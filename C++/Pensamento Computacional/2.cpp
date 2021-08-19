#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
 float n1,n2,n3,media;
 printf ("INSIRA AS NOTAS\n");
 scanf ("%f %f %f",&n1, &n2, &n3);
 media=(n1+n2+n3)/3;
 printf ("A MEDIA É %.2f\n",media);
system("pause");
}