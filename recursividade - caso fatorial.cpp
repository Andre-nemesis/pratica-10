#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int fatorial (int n) {
	if (n == 0) return 1;
	if (n > 0) return n * fatorial(n-1); 
	/*
	recursividade (chama a função dentro da função, com um ou mais casos bases para iniciar e parar), exemplos comuns fibonacchi e fatorial
	*/
	return -1;
}
/*
Função: calcular fatorial
Entrada: n inteiro
Saída fatorial de n, s n > 0 ou -1 se n < 0
*/


int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int v,arm_fat;
	
	printf("\t\t\t\t\tAlgoritmo de recursividade com fatorial\n\n");
	printf("Digite um valor para testar: ");
	scanf("%d",&v);
	system("cls");
	
	arm_fat = fatorial(v);
	
	if (arm_fat > 0) printf("\t\t\t\t\tEsse foi o resultado: %d\n",arm_fat);
	else if (arm_fat < 1) printf("\t\t\t\t\t\tEntrada inválida.\n");
	return 0;
}
