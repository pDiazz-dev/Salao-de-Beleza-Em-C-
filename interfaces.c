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
		printf("5- Listar Servicos  | 6- Sair\n");
		scanf("%d", &opcao);

    switch (opcao){
        case 1:  
        	cadastroDeCliente();
            break;
        case 3:
        	listarClientes();
        	break;
	  	case 4:
		  	adicionarServicos();
			break;
		case 5:
			listarServicos();
			break;	
        case 6:
            printf("Saindo....\n");
            break;  
        default:
            printf("opcao invalida");
            break;
    }
        
	} while (opcao != 6);
}