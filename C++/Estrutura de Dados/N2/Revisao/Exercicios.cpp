#include <stdio.h>
#include <stdlib.h>

/*
//exercicio 1
typedef struct n {
	int info;
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

void push (pilha* p,int dado){
	no *novo = (no*) malloc(sizeof(no));
	novo->info = dado;
	novo->prox = p->topo;
	p->topo = novo;
}

int pop (pilha* p){
	if (vazia(p)) {
		printf("Pilha vazia.\n");
		exit(1); 
	}
	int temp = p->topo->info;
	no *aux = p->topo;
	p->topo=aux->prox;
	free(aux);
	return temp;
}

void imprime (pilha* p){
	no *aux;
	for (aux=p->topo; aux!=NULL; aux=aux->prox)
		printf("%i\n",aux->info);
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

void SeparaParImpar(pilha *p, pilha *par, pilha *impar){
	int temp;
	while(!vazia(p)){
	    temp=pop(p);
	    if(temp%2==0){
	    	push(par,temp);
		}else{
			push(impar,temp);
		}
	}
}

void main(){
	pilha *p1 = cria();
	pilha *par = cria();
	pilha *impar = cria();
	push(p1,7);
	push(p1,12);
	push(p1,9);
	push(p1,8);
	push(p1,5);
	push(p1,3);
	push(p1,6);
	printf("Pilha p1\n");
	imprime(p1);
	SeparaParImpar(p1,par,impar);
	printf("Pilha par\n");
	imprime(par);
	printf("Pilha impar\n");
	imprime(impar);
	libera(impar);	
	libera(par);	
	libera(p1);	
}*/

/*
//exercicio 2
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
	if (f->fim != NULL) 
		f->fim->prox = novo;
	f->fim = novo;
	if (f->inicio==NULL) 
		f->inicio = f->fim;
}

float remover(fila* f){
	float temp;
	if (vazia(f)) {
		printf("Fila vazia.\n");
		exit(1);
	}
	temp = f->inicio->info;
	no* aux = f->inicio->prox;
	free(f->inicio);
	f->inicio=aux;
	if (f->inicio == NULL)
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

void preenche (fila *f1, fila *f2, fila *retorno){
	float t1,t2;
	if(!vazia(f1) || !vazia(f2)){
		if(vazia(f1)){
			while(!vazia(f2)) insere(retorno,remover(f2));
		}
		if(vazia(f2)){
			while(!vazia(f1)) insere(retorno,remover(f1));
		}
		if(!vazia(f1) && !vazia(f2)){
			t1=remover(f1);
			t2=remover(f2);
			while(!vazia(f1) && !vazia(f2)){
				if(t1<t2){
					insere(retorno,t1);
					t1=remover(f1);
				}else{
					insere(retorno,t2);
					t2=remover(f2);
				}
			}
			if(!vazia(f1)){
				while(t1<t2 && !vazia(f1)){
					insere(retorno,t1);
					t1=remover(f1);
				}
				insere(retorno,t2);
				while(t1<t2 && !vazia(f1)){
					insere(retorno,t1);
					t1=remover(f1);
				}
				insere(retorno,t1);
			}
			if(!vazia(f2)){
				while(t2<t1 && !vazia(f2)){
					insere(retorno,t2);
					t2=remover(f2);
				}
				insere(retorno,t1);
				while(t2<t1 && !vazia(f2)){
					insere(retorno,t2);
					t2=remover(f2);
				}
				insere(retorno,t2);
			}
		}
	}
}

void main(){
	fila *f1=cria();
	fila *f2=cria();
	fila *r=cria();
	insere(f1,1);
	insere(f1,2);
	insere(f1,7);
	insere(f1,9);
	insere(f1,12);
	insere(f2,3);
	insere(f2,6);
	insere(f2,10);
	printf("F1\n");
	imprime(f1);
	printf("F2\n");
	imprime(f2);
	preenche(f2,f1,r);
	printf("Retorno\n");
	imprime(r);
	libera(f1);
	libera(f2);
	libera(r);
}*/

/*//exercicio 4
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
	else{
		a->dir = insere(a->dir,dado);
	}
	return a;
}

arv* libera (arv* a){
	if (!vazia(a)){ 
		libera(a->esq);
		libera(a->dir);
		free(a); 
	}
	return NULL;
}

void imprime (arv* a){
	if (a != NULL) {
		imprime(a->esq);
		printf("%d\n",a->info);
		imprime(a->dir);
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
	else { 
	    if (a->esq == NULL && a->dir == NULL) {
			free (a); 
			a = NULL;
	    } 
		else if (a->esq == NULL) {
			arv* t = a;
			a = a->dir;
			free (t);
		} 
		else if (a->dir == NULL) {
			arv* t = a;
			a = a->esq;
			free (t);
		}
		else { 
			arv* f = a->esq;
			while (f->dir != NULL) {
		         f = f->dir;
			}
			a->info = f->info;
			f->info = dado;
			a->esq = retira(a->esq, dado);
		}
    }
    return a;
}

void nao_imprime_folhas(arv *a){
	if(a!=NULL){
		nao_imprime_folhas(a->esq);
		if(a->esq!=NULL || a->dir!=NULL)
			printf("%i\n",a->info);
		nao_imprime_folhas(a->dir);
	}
}

void main(){
	arv *a=cria();
	a=insere(a,50);
	a=insere(a,17);
	a=insere(a,76);
	a=insere(a,9);
	a=insere(a,23);
	a=insere(a,54);
	a=insere(a,14);
	a=insere(a,19);
	a=insere(a,72);
	a=insere(a,12);
	a=insere(a,67);
	printf("Arvore A\n");
	imprime(a);
	printf("Arvore sem folhas\n");
	nao_imprime_folhas(a);
	libera(a);
}*/

int f_hash(int k, int i, int m){
	return (k+i)%m;
}

void main(){
	printf("chave 1023 - posicao %i\n",f_hash(1023,5,1023));
	printf("chave 2046 - posicao %i\n",f_hash(2046,5,1023));
}