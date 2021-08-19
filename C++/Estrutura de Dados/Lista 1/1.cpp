#include <stdio.h>
#include <stdlib.h>

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
}