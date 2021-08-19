#include <stdio.h>
#include <stdlib.h>

/*//exercicio 1
void calc_esfera(float R, float *area, float *volume){
	*area=4*3.14*R*R;
	*volume=4/3*3.14*R*R*R;
}

void main(){
	float raio,a,v;
	printf("Digite o raio:\n");
	scanf("%f",&raio);
	calc_esfera(raio,&a,&v);
	printf("A area e %f\n",a);
	printf("O volume e %f\n",v);
}*/

/*//exercicio 2
void menor(int vet[], int n, int *menor, int *vezes){
	int i;
	*menor=vet[0];
	*vezes=1;
	for(i=1;i<n;i++){
		if(*menor>vet[i]){
			*menor=vet[i];
			*vezes=1;
		}else{
			if(*menor==vet[i]) (*vezes)++;
		}
	}
}

void main(){
	int v[9],me,vezes;
	v[0]=5;
	v[1]=2;
	v[2]=15;
	v[3]=3;
	v[4]=7;
	v[5]=2;
	v[6]=8;
	v[7]=6;
	v[8]=2;
	menor(v,9,&me,&vezes);
	printf("Menor: %i\n",me);
	printf("Vezes: %i\n",vezes);
}*/

/*//exercicio 3
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
}*/
/*//exercicio 4
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
}*/
/*
//exercicio 5
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
}*/

//exercicio 6
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