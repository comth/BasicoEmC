// Programa que mostra o resultado da area ou perimetro solicitado

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	*setlocale(LC_ALL,"");
	int resultado, lado, base, altura, i;
	do{
	printf("Informa��es necess�rias:  \n 1 = C�lculo da ?rea de um quadrado, \n 2 = C�lculo do per�metro de um quadrado, \n 3 = C�lculo da �rea de um tri�ngulo, \n 4 = C�lculo do per�metro de um tri�ngulo equil�tero, \n 5 = C�lculo da �rea de um ret�ngulo, \n 6 = C�lculo do per�metro de um ret�ngulo! \n\n");
	printf("Com base nas informa��es acima, digite qual o c�lculo que deseja ser realizado: ");
	scanf("%d", &resultado);
	switch(resultado){
		
		case 1: 
		printf("Digite o valor do lado do quadrado: ");
		scanf("%d", &lado);
		resultado=lado*lado;
		printf("O resultado do c�lculo da �rea do quadrado �:  \n"); 
		printf("%d", resultado); break;
		
		case 2: 
		printf("Digite o valor do lado do quadrado: ");
		scanf("%d", &lado);
		resultado=4*lado;
		printf("O resultado do c�lculo do per�metro do quadrado �: \n"); 
		printf("%d", resultado); break;
		
		case 3: 
		printf("Digite o valor da base do tri�ngulo: ");
		scanf("%d", &base);
		printf("Digite o valor da altura do tri�ngulo: ");
		scanf("%d", &altura);
		resultado=(base*altura)/2;
		printf("O resultado do c�lculo da �rea do tringulo �: \n"); 
		printf("%d", resultado); break;
		
		case 4:
		printf("Digite o valor do lado do tri�ngulo: ");
		scanf("%d", &lado);
		resultado=3*lado;
		printf("O resultado do c�lculo do per�metro do tri�ngulo equil�tero �: \n"); 
		printf("%d", resultado); break;
		
		case 5:
		printf("Digite o valor do lado do ret�ngulo: ");
		scanf("%d", &lado);
		printf("Digite o valor da altura do ret�ngulo: ");
		scanf("%d", &altura);		
		resultado=lado*altura;
		printf("O resultado do c�lculo da �rea do ret�ngulo �: \n"); 
		printf("%d", resultado); break;
		
		case 6: 
		printf("Digite o valor do lado do ret�ngulo: ");
		scanf("%d", &lado);
		printf("Digite o valor da altura do ret�ngulo: ");
		scanf("%d", &altura);
		resultado=2*altura+2*base;
		printf("O resultado do per�metro de um ret�ngulo �: \n");
		printf("%d", resultado); break;
		
		default: printf("Op��o Inv?lida");
	}
	printf("\nDeseja sair do programa?\nSim (1)\nN�o (2)\n");
	scanf("%d",&i);
	}while(i==2);
	return 0;
}