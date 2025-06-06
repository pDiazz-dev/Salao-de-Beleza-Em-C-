#include "funcoes.h"
#include <stdlib.h>
#include <stdio.h>
void menuInterface(){
		int opcao;
	do {
		printf("-----------------------------------------\n");
		printf("--        Oque deseja fazer?           --\n");
		printf("1- Cadastrar cliente | 2- Agendar servico\n");
		printf("3- Listar clientes  | 4- Adicionar servico\n");
		printf("5- Listar Servicos  | 6- Imprimir\n");
		printf("7- Sair\n");
		scanf("%d", &opcao);

    switch (opcao){
        case 1:  
        	cadastroDeCliente();
        	printf("CLIENTE CADASTRADO COM SUCESSO!\n");
            break;
        case 2:
        	agendamento();
        	printf("AGENDAMENTO FEITO COM SUCESSO!\n");
        	break;
        case 3:
        	listarClientes();
        	break;
	  	case 4:
		  	adicionarServicos();
		  	printf("SERVICO ADCIONADO COM SUCESSO!\n");
			break;
		case 5:
			listarServicos();
			break;	
        case 6:
        	imprimir();
        	printf("SALVANDO ARQUIVO...");
        	system("cls");
        	printf("ARQUIVO SALVO COM SUCESSO!\n");
            break;
		case 7:
			printf("Saindo... OBRIGADO POR UTILIZAR"); 
			break; 
        default:
            printf("opcao invalida");
            break;
    }
        
	} while (opcao != 7);
}