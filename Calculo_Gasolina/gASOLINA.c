#include <stdio.h>
#include <string.h>

//Calculo de gasolina e alcool - FAM 2020.

float gasolinaA (int gasolina){
	
	float p_gasolina = 5.50, desconto = 0.40;
	
	if (gasolina <=5){
		
		return p_gasolina * gasolina;
	}
	
	else {
		
		return gasolina * (p_gasolina - desconto );
		
	}
}

float alcoolB (int alcool){
	
	float p_alcool = 4.15, desconto = 0.30;
	
	if (alcool <=5){
		
		return p_alcool * alcool;
	}
	
	else {
		
		return alcool * (p_alcool - desconto);
	}
}

int main(){
	
	int gasolina, alcool;
    float soma;
    int opcao;
    
    do{
    	printf("\nMenu\n");
    	printf("\n1 - Gasolina\n");
    	printf("\n2 - Alcool\n");
    	printf("\n3 - Sair\n");
    	printf("\nOpcao\n");
    	scanf("%d", &opcao);
    	
    	switch (opcao){
    		case 1:
    			printf("Digite os litros de gasolina: \n");
    			scanf("%d", &gasolina);
    			if(gasolina <=5){
    				printf("O valor da gasolina e: %0.2f\n", gasolinaA(gasolina));
				}
    			
    			else {
    				printf("O valor da gasolina com desconto e: %0.2f\n", gasolinaA(gasolina));
				}
    			
    			break;
    		case 2:
    			printf("Digite os litros de alcool: \n");
    			scanf("%d", &alcool);
    			if(alcool <=5){
    				printf("O valor do alcool e: %0.2f\n", alcoolB(alcool));
				}
    			else{
    				printf("O valor do alcool com desconto e: %0.2f\n", alcoolB(alcool));
				}
				break;
    			
    		case 3:
    			printf("Saindo...\n");
    			break;
    		default:
    			printf("Opcao invalida...\n");
    			break;
    			
		} 
	} while (opcao != 3);
		
		return 0;
}





















