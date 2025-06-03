#ifndef INTERFACE_H
#define INTERFACE_H

// STRUCTS CRIADOS PARA CLIENTE E SERVIÇO
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

// FUNÇÕES NECESSARIAS PARA O MENUINTERFACE
void menuInterface();
void cadastroDeCliente();
void adicionarServicos();
void listarClientes();
void listarServicos();
void agendamento();
//EXTERNS PARA UTILIZAR ARRAYS EM OUTROS ARQUIVOS

#define MAX_CLIENTES 100

extern Cliente clienteNovo[MAX_CLIENTES];
extern int totalDeClientes;

#define MAX_SERVICOS 10

extern Servico servico[MAX_SERVICOS];
extern int totalDeServicos;

#endif