#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "funcoes.h"

	
	#define MAX_AGENDAMENTOS 10
	EstruturaDaAgenda agendar[MAX_AGENDAMENTOS];
	int totalAgendamentos = 0;
	
void agendamento(){
    system("cls");
    // VARIAVEIS UTILIZADAS
    int  numeroDoServicoColetado, numeroDoCliente, i, n;
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
                strcpy(agendar[totalAgendamentos].nomeDocliente , clienteNovo[i].nome);
                agendar[totalAgendamentos].telefone = clienteNovo[i].telefone;
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
            strcpy(agendar[totalAgendamentos].nomeDoServico , servico[n].nomeDoServico);
            agendar[totalAgendamentos].numDoServico = servico[n].numeroDoServico;
            break;
        }
    }

    if (!servicoEncontrado) {
        printf("Serviço não encontrado DIGITE NOVAMENTE\n");
    }

} while (!servicoEncontrado);
	
	printf("Qual o profissional que vai fazer?\n");
	scanf("%s", agendar[totalAgendamentos].profissional);
	printf("Qual a data do agendamento?: Ex: dd/MM/yyyy\n");
	scanf("%s", agendar[totalAgendamentos].dataDoAgendamento);
	printf("Digite o valor do serviço\n");
	scanf("%d", &agendar[totalAgendamentos].valorDoServico);
	
	system("cls");
    
	
	totalAgendamentos++;
	
	
}