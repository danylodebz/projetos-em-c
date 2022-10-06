#include <stdio.h>

int main()
{
	int a = 0;
	
	printf("Imprimindo a Tabela ASCII \n");
	
	for (a = 0; a < 169; a++){
		printf("Decimal: %i  Octal: %o   Hexadecimal: %x   Caractere: %c \n", a, a, a, a);
	}	
}
