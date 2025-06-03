#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

void agendamento(){
	system("cls");
	// VARIAVEIS UTILIZADAS
	char dataDoAgendamento[20], nomeDoProfissional[50];
	int  numeroDoServicoColetado, numeroDoCliente, i, valor, n;
	bool clienteEncontrado, servicoEncontrado;

	
	// IDENTIFICA��O DO CLIENTE
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
				printf("Cliente n�o encontrado DIGITE NOVAMENTE\n");
			}
		}	
		}while(!clienteEncontrado);
			
	
	
	// IDENTIFICA��O DO SERVI�O QUE IRA FAZER
	listarServicos();
	do {

	    printf("Qual o servi�o | Digite por n�mero\n");
	    scanf("%d", &numeroDoServicoColetado);
	
	    servicoEncontrado = false; 

    for (n = 0; n < totalDeServicos; n++) {
        if (servico[n].numeroDoServico == numeroDoServicoColetado) {
            servicoEncontrado = true;
            break;
        }
    }

    if (!servicoEncontrado) {
        printf("Servi�o n�o encontrado DIGITE NOVAMENTE\n");
    }

} while (!servicoEncontrado);
	
	
	printf("Qual o profissional que vai fazer?\n");
	scanf("%s", nomeDoProfissional);
	printf("Qual a data do agendamento?: Ex: dd/MM/yyyy\n");
	scanf("%s", dataDoAgendamento);
	printf("Digite o valor do servi�o\n");
	scanf("%d", &valor);
	
	system("cls");
	printf("======== CONFIRMA��O DE AGENDAMENTO ========\n");
	printf("Nome do cliente.............. %s\n", clienteNovo[i].nome);
	printf("Telefone do cliente.......... %d\n", clienteNovo[i].telefone);
	printf("Nome do servico.............. %s\n", servico[n].nomeDoServico);
	printf("N�mero do servico............ %d\n", servico[n].numeroDoServico);
	printf("Profissional................. %s\n", nomeDoProfissional);
	printf("Data do agendamento.......... %s\n", dataDoAgendamento);
	printf("Valor do servi�o............. R$ %d,00\n", valor);
	printf("============================================\n");
	
}