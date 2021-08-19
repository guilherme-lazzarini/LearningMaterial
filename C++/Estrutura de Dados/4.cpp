#include <stdio.h>
#include <stdlib.h>

int p(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return 2*p(n-1) + p(n-2);
}

void main(){
	int resp, pell;
	printf("Digite um numero\n");
	scanf("%i",&pell);
	resp=p(pell);
	printf("Resposta: %i\n",resp);
}