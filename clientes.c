#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
#define MAX_CLIENTES 100


Cliente clienteNovo[MAX_CLIENTES];
int totalDeClientes = 0;

void cadastroDeCliente(){
	system("cls");
	if (totalDeClientes == MAX_CLIENTES){
		printf("Já tem clientes suficientes.");
		return;
	}
	
	printf("Menu de Cadastro de Cliente:\n");
	printf("Nome do cliente: ");
	scanf("%49s", clienteNovo[totalDeClientes].nome);
	printf("Telefone do cliente: ");
	scanf("%d", &clienteNovo[totalDeClientes].telefone);
	printf("Cliente %s cadastrado com telefone %d.\n", clienteNovo[totalDeClientes].nome, clienteNovo[totalDeClientes].telefone);
	totalDeClientes++;
}

void listarClientes(){
	system("cls");
	if(totalDeClientes == 0 ){
		printf("Nem um cliente cadastrado");
		return;
	}
	int i;
	for (i = 0;i< totalDeClientes;i++){
		printf("Nome: %s \t Telefone: %d\n",clienteNovo[i].nome,clienteNovo[i].telefone);
	}
}