#include <stdio.h>
#include <stdlib.h>

typedef struct p{
	int codigo;
	char nome[50];
	int quantidade;
	float valorvenda;
}produto;

void main(){
	int n,i,mquant=0,mvalor=0;
	printf("Digite a quantidade\n");
	scanf("%i",&n);
	produto *p=(produto *)malloc(sizeof(produto)*n);
	for(i=0;i<n;i++){
		printf("Digite o codigo\n");
		scanf("%i",&p[i].codigo);
		printf("Digite o nome do produto\n");
		fflush(stdin);
		gets(p[i].nome);
		printf("Digite a quantidade\n");
		scanf("%i",&p[i].quantidade);
		printf("Digite o valor de venda\n");
		scanf("%f",&p[i].valorvenda);
		if(p[i].valorvenda>p[mvalor].valorvenda){
			mvalor=i;
		}
		if(p[i].quantidade>p[mquant].quantidade){
			mquant=i;
		}
	}
	printf("Quant: %s - %i\n",p[mquant].nome,p[mquant].quantidade);
	printf("Valor: %s - %.2f\n",p[mvalor].nome,p[mvalor].valorvenda);
	free(p);
}