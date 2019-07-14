#include <stdio.h>
#include "listaDinEncad.c"

int main (void){
    system("cls");
    
    int opcao, x;
    Lista* li;

    li = cria_lista();

    do{
        opcao = MenuDeOpcoes();

        switch(opcao){
            case 1:
                // CODE
            break;

            case 2:
                // CODE
            break;
                
            case 3: 
                // CODE
            break;
                
            case 4:
                // CODE
            break;
                
            case 5:
                if(tamanho_lista(li) == -1){
                    printf("\n Lista inexistente!\n\n");
                }else{
                    printf("\n Tamanho da lista: %d\n\n", tamanho_lista(li));
                }
            break;

            case 6:
                x = lista_vazia(li);

                if(x == -1){
                    printf("\n Lista inexistente!\n\n");                    
                }else if(x == 1){
                    printf("\n Lista vazia!\n\n");
                }else{
                    printf("\n A lista nao esta vazia\n\n");
                }

            break;
            case 7:
                printf("\n Saindo...\n\n");
            break;

            default:
                printf("\n Opcao invalida!\n\n");
            break;
        }
    }while(opcao != 7);

    libera_lista(li);

    return 0;
}