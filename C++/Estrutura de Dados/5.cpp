#include <stdio.h>
#include <stdlib.h>

int f(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return f(n-1)+f(n-2);
}

void main(){
	int num_f,resp;
	printf("Digite um numero\n");
	scanf("%i",&num_f);
	resp=f(num_f);
	printf("Resposta: %i\n",resp);
}