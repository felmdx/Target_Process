/* 4 - Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia. 
O carro de Ribeirão Preto em direção a Franca, a uma velocidade constante de 110 km/h e o caminhão de Franca 
em direção a Ribeirão Preto a uma velocidade constante de 80 km/h. Quando eles se cruzarem na rodovia, 
qual estará mais próximo a cidade de Ribeirão Preto?

IMPORTANTE:

a) Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.
b) Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais 
para passar em cada um deles e o carro possui tag de pedágio (Sem Parar)
c) Explique como chegou no resultado. */

/* Resposta: O carro levaria 1 - 1/10 h para atravessar todo o cami */

#include <stdio.h>
#include <stdlib.h>

double converte(double velkmh){
	return velkmh / 3.6;
}

int main(){
	
	printf("---------------------------- Ex 4 ---------------------------\n\n");
	
	// Primeiro alocamos as variáveis necessárias
	double velcar = 110, velcam = 80;
	int RP = 0, FR = 100000;
	double delS = 0, Vt = 0, tempoCruz = 0, sCruz1, sCruz2, sCamPar;
	
	//convertemos as velocidades para metros por segundo
	velcar = converte(velcar);
	velcam = converte(velcam);
	printf("Velocidade do carro em m/s: %.2f \nVelocidade do caminhao em m/s: %.2f\n", velcar, velcam);
	
	// Considerando que o caminhão passou por 2 pedágios ANTES de cruzar com o carro, contamos até onde
	// o carro andou enquanto o caminhão estava parado. Utilizamos a equação horária do espaço ( S = S0 + V * t )
	sCamPar = 0 +  (velcar * 600);
	
	
	// Para achar o momento de cruzamento, igualamos as duas equações do horário, sendo
	// a do carro no sentido positivo (portanto com sinal +) e a do caminhão no sentido oposto (-)
	delS = FR + RP - sCamPar;
	Vt = velcar + velcam;
	tempoCruz = delS / Vt;
	
	// Agora, ao realizar ambas equações horárias do espaço utilizando o tempo de cruzamento como t,
	// Conseguimos o exato mesmo S em que o carro e o caminhão cruzam
	sCruz1 = FR - (velcam * tempoCruz);
	sCruz2 = sCamPar + (velcar * tempoCruz);
	printf("Sendo o tempo de cruzamento = %.2f \nTemos o S de cruzamento em %.2f = %.2f\n ", tempoCruz, sCruz1, sCruz2);
	
	/* Resposta: Como consideramos que 0km é a cidade de Ribeirão Preto e 100km é a cidade de 
	Franca, no ponto 65km, por estarem no mesmo ponto, ambos estariam mais perto de Franca e
	mais longe de Ribeirão Preto. */
	
	printf("\n\nComo consideramos que 0km eh a cidade de Ribeirao Preto e 100km eh a cidade de"  
	" Franca, no ponto 65km, por estarem no mesmo ponto, ambos estariam mais perto de Franca"
	" e mais longe de Ribeirao Preto");
}