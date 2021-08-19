#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	float info;
	struct n *prox;
}no;

typedef struct f {
	no* inicio;
	no* fim;
}fila;

fila* cria (){
	fila* f = (fila*) malloc(sizeof(fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

int vazia (fila* f){
	return (f->inicio==NULL);
}

void insere(fila* f, float dado){
	no* novo = (no*) malloc(sizeof(no));
	novo->info = dado;
	novo->prox = NULL;
	if (f->fim != NULL) /* verifica se lista n�o estava vazia */
		f->fim->prox = novo;
	f->fim = novo;
	if (f->inicio==NULL) /* fila antes vazia? */
		f->inicio = f->fim;
}

float remover(fila* f){
	float temp;
	if (vazia(f)) {
		printf("Fila vazia.\n");
		exit(1); /* aborta programa */
	}
	temp = f->inicio->info;
	no* aux = f->inicio->prox;
	free(f->inicio);
	f->inicio=aux;
	if (f->inicio == NULL) /* fila ficou vazia? */
		f->fim = NULL;
	return temp;
}

void imprime (fila *f){
	no* aux;
	for (aux=f->inicio; aux!=NULL; aux=aux->prox)
		printf("%f\n",aux->info);
}

void libera(fila *f){
	no* aux = f->inicio;
	while (aux!=NULL) {
		no* temp = aux->prox;
		free(aux);
		aux = temp;
	}
	free(f);
}

void separa_filas(fila *f, fila *f_pares,fila *f_impares){
	int temp;
	while(!vazia(f)){
		temp=remover(f);
		if(temp%2==0){
			insere(f_pares,temp);
		}else{
			insere(f_impares,temp);
		}
	}
}

void inverte (fila* f){
/*	pilha *p=cria();
	while(!vazia(f)){
		push(p,remover(f));
	}
	while(!vazia(p)){
		insere(f,pop(p));
	}
	libera(p);*/
}

void main(){
	fila *f=cria();
	fila *f_pares=cria();
	fila *f_impares=cria();
	insere(f,21);
	insere(f,72);
	insere(f,45);
	insere(f,31);
	insere(f,10);
	insere(f,98);
	printf("Fila F\n");
	imprime(f);
	separa_filas(f,f_pares,f_impares);
	printf("Fila F_PARES\n");
	imprime(f_pares);
	printf("Fila F_IMPARES\n");
	imprime(f_impares);
	libera(f);
	libera(f_pares);
	libera(f_impares);
}