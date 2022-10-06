#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[30], numMaior, numMenor;
	int inicio = 1;
	
	for(int i = 0; i < 30; i++){
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
		
			if(inicio == 1){
				numMaior = num[0];
				numMenor = num[0];
			}
			
		
			
			if(num[i] > numMaior){
				numMaior = num[i];
			}
			
			if(num[i] < numMenor){
				numMenor = num[i];
			}
		
	}
	 
	printf("maior numero e: %d\n", numMaior);
	printf("menor numero e: %d", numMenor);
	
}
