#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

void agendamento(){
	system("cls");
	// VARIAVEIS UTILIZADAS
	char dataDoAgendamento[20], nomeDoProfissional[50];
	int  numeroDoServicoColetado, numeroDoCliente, i, valor, n;
	bool clienteEncontrado, servicoEncontrado;

	
	// IDENTIFICAÇÃO DO CLIENTE
	listarClientes();
	clienteEncontrado = false;
	do{
		printf("Qual o Cliente | Digite por numero de telefone\n");
		scanf("%d", &numeroDoCliente);
		clienteEncontrado= false;
      	  for (i = 0; i<totalDeClientes; i++){
			if (clienteNovo[i].telefone == numeroDoCliente){
				clienteEncontrado = true;
				break;	
			}
			if (!clienteEncontrado){
				printf("Cliente não encontrado DIGITE NOVAMENTE\n");
			}
		}	
		}while(!clienteEncontrado);
			
	
	
	// IDENTIFICAÇÃO DO SERVIÇO QUE IRA FAZER
	listarServicos();
	do {

	    printf("Qual o serviço | Digite por número\n");
	    scanf("%d", &numeroDoServicoColetado);
	
	    servicoEncontrado = false; 

    for (n = 0; n < totalDeServicos; n++) {
        if (servico[n].numeroDoServico == numeroDoServicoColetado) {
            servicoEncontrado = true;
            break;
        }
    }

    if (!servicoEncontrado) {
        printf("Serviço não encontrado DIGITE NOVAMENTE\n");
    }

} while (!servicoEncontrado);
	
	
	printf("Qual o profissional que vai fazer?\n");
	scanf("%s", nomeDoProfissional);
	printf("Qual a data do agendamento?: Ex: dd/MM/yyyy\n");
	scanf("%s", dataDoAgendamento);
	printf("Digite o valor do serviço\n");
	scanf("%d", &valor);
	
	system("cls");
	printf("======== CONFIRMAÇÃO DE AGENDAMENTO ========\n");
	printf("Nome do cliente.............. %s\n", clienteNovo[i].nome);
	printf("Telefone do cliente.......... %d\n", clienteNovo[i].telefone);
	printf("Nome do servico.............. %s\n", servico[n].nomeDoServico);
	printf("Número do servico............ %d\n", servico[n].numeroDoServico);
	printf("Profissional................. %s\n", nomeDoProfissional);
	printf("Data do agendamento.......... %s\n", dataDoAgendamento);
	printf("Valor do serviço............. R$ %d,00\n", valor);
	printf("============================================\n");
	
}