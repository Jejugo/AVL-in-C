#include <stdio.h>
#include "AVL.h"

int main(void) {       
    AVL A;
    int opcao, k, res;
    
    criar(&A);
    
    printf("Entre com a acao desejada: 0 - sair, 1 - inserir, 2 - remover, 3 - buscar\n");
    printf("Sua opcao: ");
    scanf("%d",&opcao);
    while (opcao!=0) {          
          if (opcao==1) {
             printf("Digite a chave para inserir: ");
             scanf("%d",&k);
             res=inserir(&A,k);
             if (!res)
                printf("erro: chave nao inserida\n");
             imprimir(A);
             printf("\n");
          }
          else if (opcao==2) {
             printf("Digite a chave para remover: ");
             scanf("%d",&k);
//             res=remover(&A.raiz,k);
//             if (!res)
//                printf("(erro)\n");
          }
          else if (opcao==3) {
             printf("Digite a chave para buscar: ");
             scanf("%d",&k);
             res=buscar(A,k);
             if (!res)
                printf("erro: chave nao encontrada\n");
             else printf("chave encontrada\n");
          }
          else printf("\nOpcao invalida\n");
          
          printf("\nEntre com a acao desejada: 0 - sair, 1 - inserir, 2 - remover, 3 - buscar\n");
          printf("Sua opcao: ");
          scanf("%d",&opcao);
    }

    printf("\n");
    imprimir(A);
    printf("\n");
    finalizar(&A);
    system("pause");
    return 0;
}
