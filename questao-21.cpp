#include <stdio.h>

int main(void){
	int par[12], impar[12], num, pares = 0, impares = 0;
	int i, n_read;
	
	for (;;){
		printf("*\n");
		printf("* digite um numero: ");
		
		n_read = scanf(" %d", &num);
		if(n_read < 1){
			printf("* digitacao invalida, ignorando linha digitada\n");
			scanf("%*[\n]");
			continue;
		}
		
		if (num == 0){
			
			break;
		}
		
		if(num & 1){
			impar[impares++] = num;
			if (impares == 10){
				break;
			}
		}
		else{
			par[pares++] = num;
			if (pares == 10){
				break;
			}
		}
	}
	
	printf("\n");
	
	printf("Total de numeros pares:  %d\n", pares);
	for (i = 0; i < pares; i++)
		printf("par[%d]=%d\n", i, par[i]);
		
	printf("\n");
	
	printf("Total de numeros impares: %d\n", impares);
	for(i = 0; i < impares; i++)
		printf("impar[%d]=%d\n", i, impar[i]);
	
}
