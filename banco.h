#define TOTAL 1000

typedef struct{

      char nome [20];
      int cpf [11];
      char conta [5];
      float saldo [10];
      char senha [12];
} Banco;

typedef enum{
  OK,
  MAX_CONTATO,
  SEM_CONTATO, ARQUIVO_NAO_ENCONTRADO, 
  ABRIR, 
  FECHAR, 
  LER } RESULTADOS;

typedef RESULTADOS (*funcao)(Banco[], int *);

RESULTADOS novoContato(Banco[], int *pos);
RESULTADOS apagaContato(Banco[], int *pos);
RESULTADOS listarContatos(Banco[], int *pos);
RESULTADOS debito(Banco[], int *pos);
RESULTADOS deposito(Banco[], int *pos);
RESULTADOS extrato(Banco[], int *pos);
RESULTADOS transferencia(Banco[], int *pos);
RESULTADOS salvar(Banco[], int *pos);
RESULTADOS carregar(Banco[], int *pos);
