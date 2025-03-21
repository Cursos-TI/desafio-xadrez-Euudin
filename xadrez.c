#include <stdio.h>

void menu(){ // Menu de escolhas
    printf("\n==================================================\n");
    printf("Movimentação de peça:\n");
    printf("    [T] - Torre.\n");
    printf("    [B] - Bispo.\n");
    printf("    [R] - Rainha.\n");
    printf("    [S] - Sair.\n");
    printf("Escolha uma opção: ");
}


int main(){
    int i;
    char opcao; // Escolher a opção do menu
    int sair = 1; // Sair iniciada como verdadeis, loop finaliza quando sair = falso

    while (sair){

        menu(); // Chamando o menu
        scanf(" %c", &opcao);

        switch (opcao)
        {
            case 'T': // Movimentação da torre: Em formato de cruz
            case 't':
                for(int i = 0; i < 5; i++){
                    printf("Direita\n");
                }
                break;

            case 'B': // Movimentação do Bispo: Em formato de x
            case 'b':

                i = 0; // Valor inicializado do loop
                printf("\n~~~~ Movimento Bispo: ~~~~\n");
            
                while (i < 5){ // while for apontando a direção em que a peça esta andando
                    printf("Cima  ");
                    printf("Direita\n");
                    i++;
                }
                break;

            case 'R': // Movimentação da rainha: Em formato de cruz e x
            case 'r':

                i = 0;// Valor inicializado do loop
                printf("\n~~~~ Movimento Rainha: ~~~~\n");

                do{ // while for apontando a direção em que a peça esta andando
                    printf("Esquerda\n");
                    i++;
                } while (i < 7);
                break;

            case 'S': // Finalizar o loop
            case 's':
                sair = 0; // Atribuindo o valor falso
                break;
            
            default:
                printf("Peça não encontrada!\n");
                break;
        } 
    }
    return 0;
}

