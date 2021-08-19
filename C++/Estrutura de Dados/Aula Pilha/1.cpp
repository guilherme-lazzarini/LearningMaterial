#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	float info;
	struct n *prox;
}no;

typedef struct p{
	no *topo;
}pilha;

pilha* cria (){
	pilha *p = (pilha*) malloc(sizeof(pilha));
	p->topo = NULL;
	return p;
}

int vazia (pilha *p){
	return (p->topo==NULL);
}

void push (pilha* p, float dado){
	no *novo = (no*) malloc(sizeof(no));
	novo->info = dado;
	novo->prox = p->topo;
	p->topo = novo;
}

float pop (pilha* p){
	if (vazia(p)) {
		printf("Pilha vazia.\n");
		exit(1); /* aborta programa */
	}
	float temp = p->topo->info;
	no *aux = p->topo;
	p->topo=aux->prox;
	free(aux);
	return temp;
}

void imprime (pilha* p){
	no *aux;
	for (aux=p->topo; aux!=NULL; aux=aux->prox)
		printf("%f\n",aux->info);
}

void libera (pilha* p){
	no *aux = p->topo;
	while (aux!=NULL) {
		no *temp = aux->prox;
		free(aux);
		aux = temp;
	}
	free(p);
}

void concatena_pilhas(pilha *p1,pilha *p2){
	pilha *p3=cria();
	while(!vazia(p2)){
	   push(p3,pop(p2));	
	}
	while(!vazia(p3)){
	   push(p1,pop(p3));	
	}
	libera(p3);
}

void retira_impares(pilha *p){
	int temp;
	pilha *p2=cria();
	while(!vazia(p)){
		temp=pop(p);
		if(temp%2==0){
			push(p2,temp);
		}
	}
	while(!vazia(p2)){
		push(p,pop(p2));
	}
	libera(p2);
}

void main(){
	pilha *p1 = cria();
	push(p1,10);
	push(p1,45);
	push(p1,21);
	push(p1,98);
	push(p1,31);
	push(p1,72);
	printf("Pilha p1\n");
	imprime(p1);
	retira_impares(p1);
	printf("Pilha p1- apos funcao\n");
	imprime(p1);
	libera(p1);	
	
	/*//exerc�cio 1
	pilha *p1 = cria();
	push(p1,1);
	push(p1,4.5);
	push(p1,2.1);
	printf("Pilha p1\n");
	imprime(p1);
	
	pilha *p2 = cria();
	push(p2,9.8);
	push(p2,3.1);
	push(p2,7.2);
	printf("Pilha p2\n");
	imprime(p2);
	
	concatena_pilhas(p1,p2);
	printf("Pilha p1 - apos funcao\n");
	imprime(p1);
	
	libera(p1);	
	libera(p2);	*/
}