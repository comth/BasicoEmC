#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
int main(){
	*setlocale(LC_ALL,"");
	char nome[30];
	int i,tam,cont;
	float porc;
	printf("Digite um nome:");
	gets(nome);
	tam = strlen(nome);
	cont=0;
	for(i=0;i<tam;i++){
		if(nome[i]=='a'|| nome[i]=='e'|| nome[i]=='i'|| nome[i]=='o'|| nome[i]=='u') 
		cont=cont+1;	
	}
	porc=(cont*100)/tam;
	printf("\nO nome tem %d caracteres:\nO nome tem %d vogais:",tam,cont);
	printf("\nO nome %s tem %.2f porcento de vogais:\n",nome,porc);
	return 0;
} 