#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
#define MAX_SERVICOS 10
int totalDeServicos = 0;

Servico servico[MAX_SERVICOS];
void adicionarServicos(){
	system("cls");
	
	if (totalDeServicos == MAX_SERVICOS){
		printf("Já tem servicos suficientes.");
		return;
	}
	
	printf("Menu de Cadastro de servicos:\n");
	printf("Nome do servico: ");
	scanf("%49s", servico[totalDeServicos].nomeDoServico);
	printf("Numero do servico: ");
	scanf("%d", &servico[totalDeServicos].numeroDoServico);
	printf("Cliente %s cadastrado com o numero %d.\n", servico[totalDeServicos].nomeDoServico, servico[totalDeServicos].numeroDoServico);
	totalDeServicos++;
}

void listarServicos(){
	system("cls");
	if(totalDeServicos == 0 ){
		printf("Nem um servico cadastrado");
		return;
	}
	int i;
	for (i = 0;i< totalDeServicos;i++){
		printf("Servico: %s \t Numero: %d\n",servico[i].nomeDoServico,servico[i].numeroDoServico);
	}
}