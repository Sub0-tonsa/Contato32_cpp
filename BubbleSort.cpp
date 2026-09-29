/*
	Name: BubbleSort.cpp
	Author: Giovanni Tonsa
	Date: 15/09/26 11:21
	Description: Implementação do método de ordenação Bubble Sort
*/

# include <stdio.h>

//prototipação
void bubbleSort(int *, int);

//variáveis globais
int comp =0;
int trocas = 0;

main()
{
	int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int tam = sizeof(vet)/sizeof(int);
	
	puts("Vetor original desordenado: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		
	bubbleSort(vet, tam); //invoke da função
	
	puts("\nVetor original ordenado pelo Bubble Sort: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		
	printf("\n\nNumeros de trocas: %d", trocas);
	printf("\nNumeros de comparacoes: %d", comp);
}

void bubbleSort(int *vet, int tam)
{
	int inicio, fim, aux;
	inicio = 0;
	fim = tam - 1;
	aux = 0;
	
	//Metodo do Bubble sort para ordenar os dados do vetor
	while(inicio <= fim)
	{
		for(int i = 0; i < fim; i++)
		{
			comp++;
			if(vet[i] > vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				trocas++;
			}
		}
	fim--;
	}
}

