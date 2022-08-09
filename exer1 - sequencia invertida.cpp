//Quest�o 1)  Escrever um algoritmo  que l� um vetor A(20) e o escreve. 
//Troque a seguir o 1� elemento com o �ltimo, o 2� com  o pen�ltimo,
//e assim por diante, at�  o 10� com o 11�  e escreva o vetor A assim modificado. 
//Utilizar somente um vetor para resolver o exerc�cio.
//A altera��o deve ser feita no pr�rpio vetor A. Defina um modulo para leitura , impress�o e troca.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leitura (int a[]);
void troca (int a[]);
void impressao (int a[]);

main(void){
	int a[20];
	
	leitura(a);
	troca(a);
	impressao(a);
	
}

void leitura(int a[]){
	int i;
	for(i=0 ; i<20 ; i++){
		printf("Informe o valor na posicao %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void troca(int a[]){
	int i, aux;
	for(i=0 ; i<20 ; i++){
		aux = a[i];
		a[i] = a[20 - 1 - i];
		a[20 - 1 - i] = aux;
	}
}

void impressao(int a[]){
	int i;
	printf("\n VALOR MODIFICADO \n");
	for (i=0 ; i<20 ; i++){
		printf("Posicao %d: %d\n", i+1, a[20-1-i]);
	}
}
