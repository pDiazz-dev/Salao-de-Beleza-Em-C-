#include <stdio.h>
#include <stdlib.h>

#include "funcoes.h"

		

void imprimir(){
	char nomeArquivo[60];
	int escollha;
	printf("============================== AGENDAMENTOS ================================\n");
	
	//ESSE FOR É UTILIZADO PARA LISTAR O NUMERO DO AGENDAMENTO 
	for(int lista = 0 ;lista < totalAgendamentos; lista++){
		
		printf("%i - Nome: %s \t servico: %s \t data: %s \n", lista+1,agendar[lista].nomeDocliente, agendar[lista].nomeDoServico, agendar[lista].dataDoAgendamento);
	}
	
	
	printf("Escolha qual o numero do agendamento que você deseja imprimir \n");
	scanf("%i", &escollha);
	escollha--;
			
			//COLOCANDO O NOME DO AQUIVO E CRIANDO LOGO EM SEGUIDA
			sprintf(nomeArquivo, "%i_impressao",escollha+1);
			
			
			FILE *impressaoDoAgendamento = fopen(nomeArquivo, "a");
			fprintf(impressaoDoAgendamento,"======== CONFIRMAÇÃO DE AGENDAMENTO ========\n");
    		fprintf(impressaoDoAgendamento,"Nome do cliente.............. %s\n", agendar[escollha].nomeDocliente );
    		fprintf(impressaoDoAgendamento,"Telefone do cliente.......... %d\n", agendar[escollha].telefone);
    		fprintf(impressaoDoAgendamento,"Nome do servico.............. %s\n", agendar[escollha].nomeDoServico);
    		fprintf(impressaoDoAgendamento,"Número do servico............ %d\n", agendar[escollha].numDoServico);
    		fprintf(impressaoDoAgendamento,"Profissional................. %s\n", agendar[escollha].profissional);
   	   	    fprintf(impressaoDoAgendamento,"Data do agendamento.......... %s\n", agendar[escollha].dataDoAgendamento);
    		fprintf(impressaoDoAgendamento,"Valor do serviço............. R$ %d,00\n", agendar[escollha].valorDoServico);
    		fprintf(impressaoDoAgendamento,"============================================\n");
    		fclose(impressaoDoAgendamento);
	
}