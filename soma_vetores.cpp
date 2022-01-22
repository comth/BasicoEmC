#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main(){
	*setlocale(LC_ALL,"");
	int v1[5]={1,2,3,4,5},v2[5]={1,2,3,4,5};
	int i;
	printf("Soma:\n");
	for(i=0;i<=4;i++){
		printf("%d  ",(v1[i]+v2[i]));
	}
	
	return 0;	
}