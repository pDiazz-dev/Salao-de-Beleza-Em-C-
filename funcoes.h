#ifndef INTERFACE_H
#define INTERFACE_H
typedef struct 
{
	char nome[50];
	int telefone;
} Cliente;
typedef struct 
{
	char nomeDoServico[60];
	int numeroDoServico;
} Servico;
void menuInterface();
void cadastroDeCliente();
void adicionarServicos();
void listarClientes();
void listarServicos();
#endif