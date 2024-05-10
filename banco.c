#include <stdio.h>
#include "banco.h"

void clearBuffer();
RESULTADOS novoContato(Banco banco[], int *pos){
  if(*pos == TOTAL){
    return MAX_CONTATO;
  }
  clearBuffer();
  printf("Digite o nome: ");
  fgets(banco[*pos].nome, 20, stdin);
  
  printf("Digite o cpf: ");
  fgets(banco[*pos].cpf, 11, stdin);
  
  printf("Digite o tipo da conta: ");
  fgets(banco[*pos].conta, 5, stdin);
  clearBuffer();
  printf("Digite o saldo: ");
  scanf("%f", &banco[*pos].saldo);
  clearBuffer();
  printf("Digite a senha: ");
  fgets(banco[*pos].senha, 12, stdin);
}
RESULTADOS apagaContato(Banco banco[], int *pos){
  printf("apaga contato\n");
}
RESULTADOS listarContatos(Banco banco[], int *pos){
  printf("listar contatos\n");
}
RESULTADOS debito(Banco banco[], int *pos){
  printf("debito\n");
}
RESULTADOS deposito(Banco banco[], int *pos){
  printf("deposito\n");
}
RESULTADOS extrato(Banco banco[], int *pos){
  printf("extrato\n");
}
RESULTADOS transferencia(Banco banco[], int *pos){
  printf("transferencia\n");
}
RESULTADOS salvar(Banco banco[], int *pos){
  printf("salvar\n");
}
RESULTADOS carregar(Banco banco[], int *pos){
  printf("");
}
void clearBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}