#include <stdio.h>
#include "banco.h"

int main(){
    funcao op[] = {novoContato, apagaContato, listarContatos, debito, deposito, extrato, transferencia, salvar, carregar};
    Banco clientes[TOTAL];
    int pos = 0;
    RESULTADOS resultado = op[8](clientes, &pos);
    while(1){
        int opcao;
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Novo cliente\n");
        printf("2 - Apaga cliente\n");
        printf("3 - Listar clientes\n");
        printf("4 - Débito\n");
        printf("5 - Depósito\n");
        printf("6 - Extrato\n");
        printf("7 - Transferência entre contas\n");
        printf("8 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);
    switch (opcao)

    {
    case 1:
        resultado = op[0](clientes, &pos);
           
        break;
     case 2:
        resultado = op[1](clientes, &pos);
        break;
    case 3:
        resultado = op[2](clientes, &pos);
        break;
    case 4:
        resultado = op[3](clientes, &pos);
        break;
    case 5:
        resultado = op[4](clientes, &pos);
        break;
    case 6:
        resultado = op[5](clientes, &pos);
        break;
    case 7:
        resultado = op[6](clientes, &pos);
        break;
    case 8:
        printf("Sair\n");
        return 0;

    default:
        printf("OPÇÂO INVALIDA\n\n");
        break;
    }  
    }
     return 0;
}