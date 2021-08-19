#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int info;
	struct no *prox;
}lista;

lista* inicializa(){
	return NULL;
}

int vazia(lista* no){
	if (no == NULL) return 1;
	else return 0;
}

lista* insere(lista* no, int info){
	lista* novo = (lista*) malloc(sizeof(lista));
	novo->info = info;
	novo->prox = no;
	return novo;
}

void imprime(lista* no){
	lista *L; 
	for (L = no; L!=NULL; L = L->prox)
		printf("info = %d\n", L->info);
}

void libera(lista* no){
	lista *L = no;
	while (L != NULL) {
		lista *n = L->prox;
		free(L);
		L = n;
	}
}

lista *retiraDaPosicao(lista *no, int pos){
	if(!vazia(no)){
		lista *aux=no;
		if(pos==0){
			no=no->prox;
			free(aux);
		}else{
			lista *ant;
			int i=0;
			while(aux!=NULL && pos!=i){
				ant=aux;
				aux=aux->prox;
				i++;
			}
			if(pos==i && aux!=NULL){
				ant->prox=aux->prox;
				free(aux);
			}
		}
	}
	return no;
}

int comp_tamanho(lista *l1, lista *l2){
	lista *aux;
	int t1=0,t2=0;
	for(aux=l1;aux!=NULL;aux=aux->prox){
		t1++;
	}
	for(aux=l2;aux!=NULL;aux=aux->prox){
		t2++;
	}
	if(t1==t2) return 0;
	if(t1<t2) return -1;
	if(t1>t2) return 1;
	
}

void main(){
	lista *l1=inicializa();
	l1=insere(l1,5);
	l1=insere(l1,10);
	l1=insere(l1,12);
	l1=insere(l1,7);
	printf("L1\n");
	imprime(l1);
	
	lista *l2=inicializa();
	l2=insere(l2,2);
	l2=insere(l2,4);
	l2=insere(l2,7);
	l2=insere(l2,5);
	printf("L2\n");
	imprime(l2);
	
	printf("Retorno: %i\n",comp_tamanho(l1,l2));
	//l1=retiraDaPosicao(l1,4);
	//printf("Depois da funcao\n");
	//imprime(l1);
	libera(l1);
	libera(l2);
}