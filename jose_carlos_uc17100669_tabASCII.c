#include <stdio.h>
#include <stdlib.h>

/*
Sintese:
Objetivo: Fazer programa que imprima tabela ASCII apresentando os caracteres e os valores decimais, octais e hexadecimais 
Entrada: void
Saida: tabela de caracteres ASCII
*/

int main() {
	int i;
	char ch;
	int continua=1;
	char control;
	
	for(i=0;i<256;i++){
	printf("Caractere: %c Decimal: %d Octal: %o Hexadecimal %x\n", ch, ch, ch, ch);
	ch+=1;
	if(continua%15==0){
	printf("Deseja continuar? (s/n):");
	scanf("%c",&control);
	if(control=='n'){
	printf("--------------Tabela ASCII encerrada--------------\n");
	return 0;
    }
  }
    continua+=1;
 }
	return 0;
}
