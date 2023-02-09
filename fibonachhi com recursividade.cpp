#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int fibonacci (int n) {
	if (n <= 2) return 1;
	if (n > 2) return fibonacci(n-1) + fibonacci(n-2);
}
/*
Função: calcular o fibonacci
Entrada: n inteiro
Saída fibonacci > 2 = 2, <= 2 = 3
*/


int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int v,arm_fibo;
	
	printf("\t\t\t\t\tAlgoritmo de recursividade com fatorial\n\n");
	printf("Digite um valor para testar: ");
	scanf("%d",&v);
	system("cls");
	
	arm_fibo = fibonacci(v);
	
	printf("\t\t\t\t\tEsse foi o resultado: %d\n",arm_fibo);
	return 0;
}
