#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("SEJA BEM-VINDO!\n");
	
	printf("Script de conversão de tempo\n\n");
	
	float segundoz, minutoz, horaz, diaz, semanaz;
	int opc;
	
	
	
	printf("Digite o número da opção que você quer para converter\n\n");
	
	printf("\t[1]Quantas horas tem e determinados minutos\n");
	printf("\t[2]Quantos minutos tem em determinadas horas\n");
	printf("\t[3]Quantos minutos tem em determinados dias\n");
	printf("\t[4]Quantos dias tem em determinados minutos\n");
	printf("\t[5]Quantos minutos tem em determinadas semanas\n");
	printf("\t[6]Quantas semanas tem em determinados minutos\n");
	printf("\t[7]Quantas semanas tem em determinados segundos\n");
	printf("\t[8]Quantos dias tem em determinados segundos\n");
	printf("\t[9]Quantas horas tem em determinados segundos\n");
	printf("\t[10]Quantos minutos tem em determinados segundos\n");
	scanf("%d", &opc);
	
	
	
	
	if (opc == 1){
		printf("Digite um valor de minutos: \n");
		scanf("%f", &minutoz);
	
		horaz = (float)(minutoz / 60.0);
	
		printf("%.2f minutoz é igual a: %f horas\n", minutoz, horaz);
		printf("Valor arredondado: %.2f\n", horaz);
	}
	
	
	else if (opc == 2){
		printf("Digite um valor em horas: \n");
		scanf("%f", &horaz);
	
		minutoz = (float)(horaz * 60.0);
	
		printf("%.2f horas é igual a: %f minutos\n", horaz, minutoz);
		printf("Valor arredondado: %.2f\n", minutoz);
	}
	
	else if (opc == 3){
		printf("Digite um valor de dias: \n");
		scanf("%f", &diaz);
	
		minutoz = (float)(diaz * 24.0) * 60.0;
	
		printf("%.2f diaz é igual a: %f minutos\n", diaz, minutoz);
		printf("Valor arredondado: %.2f\n", minutoz);
	}
	
	else if (opc == 4){
		printf("Digite um valor de minutos: \n");
		scanf("%f", &minutoz);
	
		diaz = (float)(minutoz / 24.0) / 60.0;
	
		printf("%.2f minutos é igual a: %f dias\n", minutoz, diaz);
		printf("Valor arredondado: %.2f\n", diaz);
	}
	
	else if (opc == 5){
		printf("Digite um valor de semanas: \n");
		scanf("%f", &semanaz);
	
		minutoz = (float)((semanaz * 7.0) * 24.0) * 60.0;
	
		printf("%.2f semanas é igual a: %f minutos\n", semanaz, minutoz);
		printf("Valor arredondado: %.2f\n", minutoz);
	}
	
	
	else if (opc == 6){
		printf("Digite um valor de minutos: \n");
		scanf("%f", &minutoz);
	
		semanaz = (float)((minutoz / 7.0) / 24.0) / 60.0;
	
		printf("%.2f minutos é igual a: %f semanas\n", minutoz, semanaz);
		printf("Valor arredondado: %.2f\n", semanaz);
	}
	
	
	else if (opc == 7){
		printf("Digite um valor de segundos: \n");
		scanf("%f", &segundoz);
	
		semanaz = (float)(((segundoz / 7.0) / 24.0) / 60.0) / 60.0;
	
		printf("%.2f segundos é igual a: %f semanas\n", segundoz, semanaz);
		printf("Valor arredondado: %.2f\n", semanaz);
	}
	
	
	else if (opc == 8){
		printf("Digite um valor de segundos: \n");
		scanf("%f", &segundoz);
	
		diaz = (float)((segundoz / 24.0) / 60.0) / 60.0;
	
		printf("%.2f segundos é igual a: %f dias\n", segundoz, diaz);
		printf("Valor arredondado: %.2f\n", diaz);
	}
	
	
	else if (opc == 9){
		printf("Digite um valor de segundos: \n");
		scanf("%f", &segundoz);
	
		horaz = (float)(segundoz / 60.0) / 60.0;
	
		printf("%.2f segundos é igual a: %f horas\n", segundoz, horaz);
		printf("Valor arredondado: %.2f\n", horaz);
	}
	
	
	else if (opc == 10){
		printf("Digite um valor de segundos: \n");
		scanf("%f", &segundoz);
	
		minutoz = (float)(segundoz / 60.0);
	
		printf("%.2f segundos é igual a: %f minutos\n", segundoz, minutoz);
		printf("Valor arredondado: %.2f\n", minutoz);
	}
	
	else{
		printf("ERRO! Opção inválida!\n");
	}
	
	
	printf("\nFIM!\n");
	return 0;
}