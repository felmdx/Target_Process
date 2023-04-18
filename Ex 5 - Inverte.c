/* 					Ex. 5 - Inverter String
Escreva um programa que inverta os caracteres de um string. IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua 
preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;            */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char String[] = "Escreva um programa que inverta os caracteres de um string.";
	char inverte[100];
	int j;
	int i;
	
	//printf("%c", String[26]);
	
	int tam = strlen(String) - 1;
	j = tam;
	
	for(i = 0; i <= tam; i++){
		inverte[j] = String[i];
		j--;
	}
	
	printf("%s", inverte);
}