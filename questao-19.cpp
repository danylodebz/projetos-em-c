#include <stdio.h>

int main(){
	int num[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &num[i]);
	}
		if(num[0]> num[1] & num[0]> num[2] & num[0]> num[3] & num[0]> num[4] & num[0]> num[5]){
		
			printf("O maior numero digitado foi: %d\t \t", num[0]);
	}
		else if(num[1]> num[0] & num[1]> num[2] & num[1]> num[3] & num[1]> num[4] & num[1]> num[5]){
			
			printf("O maior numero digitado foi: %d\t \t", num[1]);
	}
		else if(num[2]> num[0] & num[2]> num[1] & num[2]> num[3] & num[2]> num[4] & num[2]> num[5]){
			
			printf("O maior numero digitado foi: %d\t \t", num[2]);
	}
		else if(num[3]> num[0] & num[3]> num[1] & num[3]> num[2] & num[3]> num[4] & num[3]> num[5]){
			
			printf("O maior numero digitado foi: %d\t \t", num[3]);
	}
		else if(num[4]> num[0] & num[4]> num[2] & num[4]> num[3] & num[4]> num[1] & num[4]> num[5]){
			
			printf("O maior numero digitado foi: %d\t \t", num[4]);
	}
		else if(num[5]> num[0] & num[5]> num[2] & num[5]> num[3] & num[5]> num[4] & num[5]> num[1]){
			
			printf("O maior numero digitado foi: %d\t \t", num[5]);
	}
		
	
}
