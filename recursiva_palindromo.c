#include <stdio.h>
#include <string.h>

// Fun��o recursiva para verificar se a palavra � pal�ndromo
int palindromo(char palavra[], int tam, int posicao) {

    if (posicao < tam / 2){
        if (palavra[posicao] == palavra[tam - posicao - 1]){
            return 1 * palindromo(palavra, tam, posicao+1);
        }
        else{
            return 0;
        }
    }
    else{
        return 1;
    }
}

int main() {

   char palavra[255];
   int tam;

   printf ("Digite a palavra: \n");
   gets(palavra); // Ler a palavra digitada pelo usu�rio

   tam = strlen(palavra); // Tamanho da palavra

   if (palindromo(palavra, tam, 0))
      printf("� pal�ndromo\n");
   else
      printf("N�o � pal�ndromo\n");

   return 0;
}
