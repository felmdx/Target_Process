/* 1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça {
K = K + 1;
SOMA = SOMA + K;
}
imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA? */

/* Resposta: O valor da váriavel soma será 91. Segue o código comprovando. */

#include <stdio.h>


int main(){

int INDICE = 13, SOMA = 0, K = 0;

	while (K < INDICE){
		K = K + 1;
		SOMA = SOMA + K;

	}

printf("%d", SOMA);

return 0;
}

// O resultado é 91