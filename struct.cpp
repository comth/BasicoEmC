#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
struct dados{
	 int numcam;
	 float peso;
	 float h;
	 char pril[3];	
}
main()
{
	int i;
	*setlocale(LC_ALL,"");
	struct dados cadastro[3] ;
	for(i=0;i<3;i++){
		printf("******CADASTRO[%d]*****",i+1);
		printf("\nDigite primeira letra do nome: ");
		fflush (stdin);
		gets (cadastro[i].pril);
		printf("Digite o número da camisa:");
		fflush (stdin);
		scanf("%d",&cadastro[i].numcam);
		printf("Digite o peso:");
		fflush (stdin);
		scanf("%f",&cadastro[i].peso);
		printf("Digite a altura:");
		fflush (stdin);
		scanf("%f",&cadastro[i].h);
		printf("\n");
	}
	system ("cls");
	float baixo=cadastro[0].h;
	char k=cadastro[0].pril;
	float pesado=cadastro[0].peso;
	for(i=1;i<3;i++){		
		if (cadastro[i].h<baixo){
			baixo=cadastro[i].h;
			k=cadastro[i].pril;
		}
		if(cadastro[i].peso>pesado) pesado=cadastro[i].peso;
	}
	printf("")
	printf("\n");
	system ("pause");
}