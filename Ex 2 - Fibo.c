/* 											Ex. 2 - Sequência de Fibonacci
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. */

#include <stdio.h>
#include <stdlib.h>


int fibo (int n) {
	
   int aux = 0;
   int a = 0;
   int b = 1;        
       
   for (int j = 2; j <= n; j++) {
   		aux = a + b;
        a = b;
        b = aux;
   }        
                                               
    return b;                             
}        

int main(){
	
	int i = 2;
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	if (n == 0 || n == 1) {
        	printf("O numero esta na sequencia de Fibonacci.");
        	return 0;
	}
	
	while (i) {
		if (fibo(i) == n){
			printf("O numero esta na sequencia de Fibonacci.");
			return 0;
		} 
		if (fibo(i) > n) {
			printf("O numero nao esta na sequencia de Fibonacci.");
			return 0;
		}
		i++;
	}
}		
