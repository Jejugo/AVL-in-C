//declara��o do n� da �rvore
typedef int elem;

typedef struct bloco {
        elem info;
        int fb;
        struct bloco *esq, *dir;
} no;

typedef no *AVL;


//prot�tipos das fun��es
void criar(AVL*);
void finalizar(AVL*);
void imprimir(AVL);
int inserir(AVL*,int);
int buscar(AVL,int);
