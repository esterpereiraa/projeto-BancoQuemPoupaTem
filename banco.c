#include <stdio.h>
#include "banco.h"
#include <string.h>


void clearBuffer(); // limpando o buffer
RESULTADOS novoContato(Banco banco[], int *pos){
  if(*pos == TOTAL){
    return MAX_CLIENTES;
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
RESULTADOS apagaContato(Banco clientes[], int *pos){
  printf("apaga contato\n");
}
RESULTADOS listarContatos(Banco clientes[], int *pos){
  printf("listar contatos\n");
  }

RESULTADOS debito(Banco clientes[], int *pos){
  printf("debito\n");
}
RESULTADOS deposito(Banco clientes[], int *pos){
  printf("deposito\n");
}
RESULTADOS extrato(Banco clientes[], int *pos){
  printf("extrato\n");
}
RESULTADOS transferencia(Banco clientes[], int *pos){
  printf("transferencia\n");
}
RESULTADOS salvar(Banco clientes[], int *pos){
  FILE *arquivo = fopen("clientes.bin", "wb");
  if (arquivo == NULL)
    return ABRIR;
  int quant = fwrite(clientes,TOTAL, sizeof(Banco), arquivo);
  if (quant == 0)
    return ESCREVER;
  quant = fwrite(pos, sizeof(int), 1, arquivo);
  if (quant == 0)
    return ESCREVER;
  if (fclose(arquivo))
    return FECHAR;
  return OK;
}
RESULTADOS carregar(Banco clientes[], int *pos){
  FILE *arquivo = fopen("clientes.bin", "rb");
  if (arquivo == NULL)
    return ABRIR;
  int quant = fread(clientes, TOTAL, sizeof(Banco), arquivo);
  if (quant == 0)
    return LER;
  quant = fread(pos, sizeof(int), 1, arquivo);
  if (quant == 0)
    return LER;
  if (fclose(arquivo))
    return FECHAR;
  return OK;

}
void clearBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}