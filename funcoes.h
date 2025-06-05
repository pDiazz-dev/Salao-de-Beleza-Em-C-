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


typedef struct 
{
	char nomeDocliente[50];
	char nomeDoServico[60];
	char profissional[50];
	char dataDoAgendamento[20];
	int valorDoServico;
	int telefone;
	int numDoServico;
	
}EstruturaDaAgenda;



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

#define MAX_AGENDAMENTOS 10
	extern EstruturaDaAgenda agendar[MAX_AGENDAMENTOS];
	extern int totalAgendamentos;

#endif