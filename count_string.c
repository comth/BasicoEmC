#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main(){
	*setlocale(LC_ALL,"");
	int tam;
	char nome[30],sn[30],nome2[30];
	printf("Digite um nome:");
	gets(nome);
	printf("nome = %s\n",strcpy(nome2,nome));
	printf("Digite o sobrenome:");
	gets(sn);
	printf("Sobrenome = %s",sn);
	printf("\n\n%s",strcat(nome,sn));
	tam=strlen(nome);
	printf("\nNúmero de caracteres: %d",tam);
	tam = strcmp(nome2,sn);
	if(tam == 0) printf("\nAs palavras são iguais.");
	else printf("\nAs palavras não são iguais.");
	printf("\nPrimeira palavra maiúscula : %s\n",strupr(nome2));
	printf("\nPrimeira palavra minúscula : %s\n",strlwr(nome2));
	getchar();	
} 