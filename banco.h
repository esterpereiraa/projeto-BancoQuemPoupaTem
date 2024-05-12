#define TOTAL 1000
#define OP_FEITAS 100

typedef struct{

      char nome [20];
      int cpf [11];
      char conta [5];
      double saldo [15];
      char senha [12];
} Banco;

typedef enum{
  OK,
  MAX_CLIENTES,
  SEM_CLIENTES, ARQUIVO_NAO_ENCONTRADO, 
  ABRIR, 
  FECHAR, 
  LER,
  ESCREVER} RESULTADOS;

typedef RESULTADOS (*funcao)(Banco[], int *);

RESULTADOS novoContato(Banco clientes[], int *pos);
RESULTADOS apagaContato(Banco clientes[], int *pos);
RESULTADOS listarContatos(Banco clientes[], int *pos);
RESULTADOS debito(Banco clientes[], int *pos);
RESULTADOS deposito(Banco clientes[], int *pos);
RESULTADOS extrato(Banco clientes[], int *pos);
RESULTADOS transferencia(Banco clientes[], int *pos);
RESULTADOS salvar(Banco clientes[], int *pos);
RESULTADOS carregar(Banco clientes[], int *pos);
