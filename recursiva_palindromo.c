#include <stdio.h>
#include <string.h>

// Função recursiva para verificar se a palavra é palíndromo
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
   gets(palavra); // Ler a palavra digitada pelo usuário

   tam = strlen(palavra); // Tamanho da palavra

   if (palindromo(palavra, tam, 0))
      printf("É palíndromo\n");
   else
      printf("Não é palíndromo\n");

   return 0;
}
