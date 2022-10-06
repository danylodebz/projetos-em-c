#include <stdio.h>

int main(){
	int num, i, fat, mult;
	
	printf("Digite um numero natural: ");
	scanf("%d", &num);
	
	for(i = num; i > 0; i--){
		fat = i - 1;
		mult = i * fat;
		
		printf("%d", mult);
	}
	
}
