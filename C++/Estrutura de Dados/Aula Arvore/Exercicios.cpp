#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
	int info;
	struct tree *esq;
	struct tree *dir;
}arv;

arv* cria () {
	return NULL;
}

int vazia (arv* a) {
	return a==NULL;
}

arv* insere (arv* a, int dado) {
	if (a==NULL) {
		a = (arv*)malloc(sizeof(arv));
		a->info = dado;
		a->esq = a->dir = NULL;
	} else if (dado < a->info)
		a->esq = insere(a->esq,dado);
	else/* dado >= a->info */
		a->dir = insere(a->dir,dado);
	return a;
}

arv* libera (arv* a){
	if (!vazia(a)){ 
		libera(a->esq); /* libera sae */
		libera(a->dir); /* libera sad */ 
		free(a); /* libera raiz */
	}
	return NULL;
}

void imprime (arv* a){
	if (a != NULL) {
		/*RED - pre ordem
		printf("%d\n",a->info);
		imprime(a->esq);
		imprime(a->dir);*/
		//ERD - em ordem
		imprime(a->esq);
		printf("%d\n",a->info);
		imprime(a->dir);
		/*//EDR - pos ordem
		imprime(a->esq);
		imprime(a->dir);
		printf("%d\n",a->info);*/
	} 
}

void main(){
	arv *a=cria();
	a=insere(a,8);
	a=insere(a,3);
	a=insere(a,10);
	a=insere(a,1);
	a=insere(a,6);
	a=insere(a,14);
	a=insere(a,4);
	a=insere(a,7);
	a=insere(a,13);
	imprime(a);
	libera(a);
}