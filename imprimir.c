#include <stdio.h>




void imprimir(){
	FILE *gerarArquivo;
	
	gerarArquivo = fopen("Comprovante.txt", "w");
	
	fprintf(gerarArquivo, "%s");

}