/*
	Name: Ex1_Bubblesort.cpp
	Author: Giovanni Tonsa
	Date: 15/09/26 12:13
	Description: Programa que pergunta se o usuarior deseja ser crecente ou decrecente o vetor
*/

# include <stdio.h>
# include <windows.h>

//prototipação
void bubbleSortCres(int *, int);
void bubbleSortDec(int *, int);

main()
{
	int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53, -7};
	int tam = sizeof(vet)/sizeof(int);
	int opc;
	
	switch(opc)
	{
		case 1: bubbleSortCres(vet, tam);
		case 2: bubbleSortDec(vet, tam);
		case 3: exit(0);
	}
	
	puts("Vetor original desordenado: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
	
	puts("\nVetor original ordenado pelo Bubble Sort: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		
}

void bubbleSortCres(int *vet, int tam)
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
			if(vet[i] > vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	fim--;
	}
}

void bubbleSortDec(int *vet, int tam)
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
			if(vet[i] < vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	fim--;
	}
}

