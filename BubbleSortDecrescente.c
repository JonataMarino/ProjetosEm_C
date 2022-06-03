#include <stdio.h>
#include <stdlib.h>

#define qtde 15

void lerVet(int *v){
	int i;
	for (i=0; i<qtde; i++){
		printf("valor [%d]: \n", i+1);
		scanf("%d",v);
		v++;
	}
}

void mostrarVet (int *v){
	int i;
	for(i=0; i<qtde; i++){
		printf("valor [%d] = %d \n", i+1, v[i]);
	}
}

void trocar (int *v, int x, int y){
	int aux = v[x];
	v[x] = v[y];
	v[y] = aux;
}

void bubbleSort(int *v){
	int i, j;
	for (i=qtde-1; i>0; i--){
		for (j=0; j<i; j++){
			if(v[j]<v[j+1])
				trocar(v, j, j+1);
		}
	}
}

int main (int argc, char *argv[]){
	int vet[qtde];
	
	printf("\nDigite o conteudo do vetor: \n");
	lerVet(&vet);
	printf("\nConteudo digitado para o vetor: \n");
	mostrarVet(vet);
	
	printf("\nO vetor foi ordenado de forma decrescente!\n");
	bubbleSort(vet);
	
	printf("\nConteúdo do vetor ordenado em forma decrescente: \n");
	mostrarVet(vet);
}
