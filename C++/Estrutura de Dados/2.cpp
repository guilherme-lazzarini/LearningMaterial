#include <stdio.h>
#include <stdlib.h>

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
}