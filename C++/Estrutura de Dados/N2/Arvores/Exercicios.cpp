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
		/*//pre ordem - RED
		printf("%d\n",a->info);
		imprime(a->esq);
		imprime(a->dir);*/
		
		//em ordem - ERD
		imprime(a->esq);
		printf("%d\n",a->info);
		imprime(a->dir);
		
		/*//pos ordem - EDR
		imprime(a->esq);
		imprime(a->dir);
		printf("%d\n",a->info);*/
	} 
}

arv* busca (arv* a, int dado) {
	if (a == NULL) return NULL;
	else if (a->info > dado) 
		return busca (a->esq, dado);
	else if (a->info < dado)
		return busca (a->dir, dado);
	else return a; 
}

arv* retira (arv* a, int dado) {
	if (a == NULL) return NULL;
	else if (a->info > dado)
		a->esq = retira(a->esq, dado);
	else if (a->info < dado)
		a->dir = retira(a->dir, dado);
	else { /* achou o n� a remover */
	      /* n� sem filhos */
	      if (a->esq == NULL && a->dir == NULL) {
			free (a); 
			a = NULL;
	      } /* n� s� tem filho � direita */
	else if (a->esq == NULL) {
		arv* t = a;
		a = a->dir;
		free (t);
	} 
	/* s� tem filho � esquerda */
	else if (a->dir == NULL) {
		arv* t = a;
		a = a->esq;
		free (t);
	} /* n� tem os dois filhos */
	else { 
		arv* f = a->esq;
		while (f->dir != NULL) {
		         f = f->dir;
		}
		a->info = f->info;
		/* troca as informa��es */
		f->info = dado;
		a->esq = retira(a->esq, dado);
	}
       }
       return a;
}

int quant_elementos(arv *a){
	if(a==NULL) return 0;
	return 1+quant_elementos(a->esq)
		+quant_elementos(a->dir);
}

int altura(arv *a){
	if(a==NULL) return 0;
	if(a->esq==NULL && a->dir==NULL) return 1;
	int e,d;
	e=altura(a->esq);
	d=altura(a->dir);
	if(e>d) return 1+e;
	else return 1+d;
}

int quant_folhas(arv *a){
	if(a==NULL) return 0;
	if(a->esq==NULL && a->dir==NULL)
		return 1;
	return quant_folhas(a->esq)+
		quant_folhas(a->dir);
}

arv* exclui_folhas(arv *a){
	if(a==NULL) return a;
	if(a->esq==NULL && a->dir==NULL){
		free(a);
		return NULL;
	}
	a->esq=exclui_folhas(a->esq);
	a->dir=exclui_folhas(a->dir);
	return a;
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
	a=exclui_folhas(a);
	printf("Apos excluir folhas\n");
	imprime(a);
	//printf("Altura: %i\n",altura(a));
	//printf("Folhas: %i\n",quant_folhas(a));
	//arv *temp=busca(a,6);
	//printf("Encontrou: %i\n",temp->info);
	//printf("retira\n");
	//a=retira(a,8);
	//imprime(a);
	//printf("quant.: %i\n",quant_elementos(a));
	libera(a);
}