//declaração do nó da árvore
typedef int elem;

typedef struct bloco {
        elem info;
        int fb;
        struct bloco *esq, *dir;
} no;

typedef no *AVL;


//protótipos das funções
void criar(AVL*);
void finalizar(AVL*);
void imprimir(AVL);
int inserir(AVL*,int);
int buscar(AVL,int);
