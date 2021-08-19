#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 7

typedef struct n {
	float info;
	struct n *prox; 
}no;

int f_hash(float valor) {
	return abs(valor) % TAM_MAX;
}

void inicializa(no **hash) {
	int i;
	for(i=0; i<TAM_MAX; i++)
		hash[i]=NULL;		 
}

void insere(no **hash, float valor) {
	int pos = f_hash(valor);
	no* novo = (no *) malloc(sizeof(no));
  	if (novo==NULL) {
		printf("Erro!\n");
		exit(1);
  	}
  	novo->info=valor;
	novo->prox=NULL;
	no **lista = &hash[pos];
	if (*lista == NULL) {
	   *lista = novo;
  	    printf("Inserido HASH[%d]\n",pos);
 	}
 		else {
	    printf("Inserido com Colisao HASH[%d]\n",pos);
	    no *temp= hash[pos];
		if(temp->info==valor)
		     printf("Valor %.2f ja inserido\n",valor); 
		while (temp->prox != NULL){
		    if(temp->info==valor)
	                         printf("Valor %.2f ja inserido\n",valor);
		    temp=temp->prox; 
		} 			
		temp->prox=novo;
	}		
}

void apaga(no **hash, float valor) { 
	int pos = f_hash(valor);
 	no **lista = &hash[pos];
	no* ant = NULL; 
	no* aux = *lista;
	while (aux != NULL && aux->info != valor) {
		ant = aux;
		aux = aux->prox;
	}
	if (aux == NULL){
		printf("Valor nao encontrado!\n"); 	
		return;
	}
	if (ant == NULL) hash[pos] = aux->prox;
	else ant->prox = aux->prox;
	free(aux);
}

no* busca(no **hash, float valor) {
	int pos = f_hash(valor);
	no *lista = hash[pos];
	while (lista != NULL) {
		if (valor == lista->info) return lista;
		lista = lista->prox;
	}
	return NULL;
}

void imprime(no **hash) {
	printf("\nTabela Hash\n");
	int i;
	for (i=0; i<TAM_MAX; i++) {
		printf("HASH[%d]\t",i);
		no *lista = hash[i];
		while (lista != NULL) {
			printf(" -> %.2f\t",lista->info);
			lista = lista->prox;
		}
		printf("\n");
	}
}

void libera(no **hash) {
	int i;
	no *aux;
	for(i=0; i<TAM_MAX; i++) {
		no **lista=&hash[i]; 
		while(*lista!= NULL) {
  			aux = (*lista)->prox;                
  			free(*lista);
  			*lista = aux; 
  		} 
  	}	
}

int f_hash_mult(int valor, int tam){
    float A = (sqrt(5)-1)/2;
    float val= valor * A;
	val= val-(int) val;
    return(int) (tam * val);
}

/*void main(){
	printf("Chave 61 na posicao %i\n",
		f_hash_mult(61,1000));
	printf("Chave 62 na posicao %i\n",
		f_hash_mult(62,1000));
	printf("Chave 63 na posicao %i\n",
		f_hash_mult(63,1000));
	printf("Chave 64 na posicao %i\n",
		f_hash_mult(64,1000));
	printf("Chave 65 na posicao %i\n",
		f_hash_mult(65,1000));
}*/

void main(){
	no *tabela_hash[TAM_MAX];
	int i;
	float valor;
	inicializa(tabela_hash);
	for(i=0;i<10;i++){
		printf("Digite o %io valor\n",i+1);
		scanf("%f",&valor);
		insere(tabela_hash,valor);
		imprime(tabela_hash);
	}
	no *temp=busca(tabela_hash,5);
	if(temp!=NULL) printf("Encontrado: %.2f\n",temp->info);
	while(1){
		printf("Digite o valor para apagar\n");
		scanf("%f",&valor);
		if(valor<0) break;
		apaga(tabela_hash,valor);
		imprime(tabela_hash);
	}
	libera(tabela_hash);
}