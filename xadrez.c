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

void movimento(){ // Movimento de peça em cruz
    printf("    [y] - Vertical.\n");
    printf("    [x] - Horizontal.\n");
    printf("Escolha uma opção: ");
}

void torre(){ // Definindo o movimento da torre
    char mov; // Define qual a opção do movimento
    int numerador = 0; // Enumera as ocorrencias
    int yy; // Movimentação na vertical
    int xx; // Movimentação na Horizontal

    printf("\n~~~~ Movimento Torre: ~~~~\n");

    movimento(); // Função que mostra as opção de movimentação
    scanf(" %c", &mov);

    switch (mov){
        case 'Y': // Movimento na vertical
        case 'y':{

            printf("Digite um valor entre (-6 a 6): ");
            scanf("%d",&yy);

            if (yy >= -6 && yy < 0){ // Andando para baixo
                for(int i = -1; i >= yy; i--){

                    numerador++; // Atualizando o numero

                    printf("%d - Baixo\n", numerador);
                } // Loop for apontando a direção para baixo
            } 
            else if (yy > 0 && yy <= 6){ // Andando para cima
                for(int i = 1; i <= yy; i++){

                    numerador++;

                    printf("%d - Cima\n", numerador);
                } // Loop for apontando a direção para cimma
            }
            else {printf("Opção invalida.\n");}
        }
            break;

        case 'X': // Movimento na horizontal
        case 'x':{

            printf("Digite um valor entre (-6 a 6): ");
            scanf("%d",&xx);

            if (xx >= -6 && xx < 0){ // Andando para esquerda
                for(int i = -1; i >= xx; i--){

                    numerador++;

                    printf("%d - Esquerda\n", numerador);
                } // Loop for apontando a direção para Esquerda
            } 
            else if (xx > 0 && xx <= 6){ // Andando para direita
                for(int i = 1; i <= xx; i++){

                    numerador++;

                    printf("%d - Direita\n", numerador);
                } // Loop for apontando a direção para Direita
            }
            else {printf("Opção invalida.\n");}
        }
            break;

        default: // Caso a opção não esteja incluida
            printf("Movimento invalido.\n");
            break;
    }
}

void bispo(){ // Definindo o movimento do bispo
    int numerador = 0; // Enumerando ocorrencias
    char direcao; // Define qual o movimento e lado
    int yy = 0, xx = 0; // Variáveis para o deslocamento
    int i; // Contador de loop
    printf("\n~~~~ Movimento Bispo: ~~~~\n");

    printf("    [D] - Diagonal direita.\n");
    printf("    [E] - Diagonal esquerda.\n");
    printf("Opção: ");
    scanf(" %c", &direcao);

    switch (direcao)
    {
        case 'D': // Diagonal direita
        case 'd':
            printf("Diagonal direita (-5 a 5): ");
            scanf("%d", &yy);

            if (yy > 0 && yy <= 5) { // Loop while apontando para a diagonal direita superior
                i = 1; // Valor inicial do loop
                while (i <= yy) {
                    numerador++; // Atualizando o numerador
                    printf("%d - Direita  Cima\n", numerador);
                    i++; // Atualizando o loop em 1
                }
            } else if (yy < 0 && yy >= -5) {
                i = -1; // Valor inicial do loop
                while (i >= yy) { // Loop while apontando para a diagonal inferior direita
                    
                    numerador++;
                    printf("%d - Direita  Baixo\n", numerador);
                    i--; // Atualizando o loop em -1
                }
            } else {
                printf("Movimento inválido!\n");
            }
            break;

        case 'E': // Diagonal esquerda
        case 'e':
            printf("Diagonal esquerda (-5 a 5): ");
            scanf("%d", &xx);

            if (xx > 0 && xx <= 5) { 
                i = 1;
                while (i <= xx) { // Loop while apontando para a diagonal esquerda superior
                    
                    numerador++;
                    printf("%d - Esquerda  Cima\n", numerador);
                    i++;
                }
            } else if (xx < 0 && xx >= -5) {
                i = -1;
                while (i >= xx) { // Loop while apontando para a diagonal inferior esquerda
                    
                    numerador++;
                    printf("%d - Esquerda  Baixo\n", numerador);
                    i--;
                }
            } else {
                printf("Movimento inválido!\n");
            }
            break;

        default:
            printf("Movimento inválido.\n");
            break;
    }
}

void rainha(){ // Definindo o movimento da rainha
    int i; // Contador do loop
    char opcao; // Opção de movimento
    int y, x; // Direção vertical e horizontal
    int numerador = 1;

    printf("\n~~~~ Movimento Rainha: ~~~~\n");
    printf("    [D] - Diagonal direita.\n");
    printf("    [E] - Diagonal esquerda.\n");
    movimento();
    scanf(" %c", &opcao);

    switch (opcao){
        case 'Y':
        case 'y':
            printf("Digite um valor entre (-6 a 6): ");
            scanf("%d", &y);

                if (y > 0 && y <= 6){ // Movimento para cima
                    i = 1; // Valor incial do loop
                    do{
                        printf("%d - Cima\n", numerador);
                        numerador++; // Incrementando o numerador
                        i++; // Incrementando a atualização do loop
                    } while(i <= y);
                }
                else if(y < 0 && y >= -6){ // Movimento para baixo
                    i = -1; // Valor inicial do loop
                    do{
                        printf("%d - Baixo\n", numerador);
                        numerador++;
                        i--; // Decrementnado a atualização do loop
                    }while (i >= y);
                }
                else {printf("Movimento invaliso\n");}
            break;

        case 'X':
        case 'x':
            printf("Digite um valor entre (-6 a 6): ");
            scanf("%d", &x);

                if (x > 0 && x <= 6){ // Movimento para Direita
                    i = 1;
                    do{
                        printf("%d - Direita\n", numerador);
                        numerador++;
                        i++;
                    } while(i <= x);
                }
                else if(x < 0 && x >= -6){ // Movimento para Esquerda
                    i = -1;
                    do{
                        printf("%d - Esquerda\n", numerador);
                        numerador++;
                        i--;
                    }while (i >= x);
                }
                else {printf("Movimento invalido\n");}
            break;

        case 'D':
        case 'd':
            printf("Digite um valor entre (-5 a 5): ");
            scanf("%d", &y);

            if (y > 0 && y <= 5){ // Movimento Diagonal superior
                i = 1;
                do{
                    printf("%d - Cima Direita\n", numerador);
                    numerador++;
                    i++;
                } while(i <= y);
            }
            else if(y < 0 && y >= -5){ // Movimento Diagonal inferior
                i = -1;
                do{
                    printf("%d - Baixo Direita\n", numerador);
                    numerador++;
                    i--;
                }while (i >= y);
            }
            else {printf("Movimento invalido\n");}
            break;

        case 'E':
        case 'e':
            printf("Digite um valor entre (-5 a 5): ");
            scanf("%d", &y);

            if (y > 0 && y <= 5){ // Movimento Diagonal superior
                i = 1;
                do{
                    printf("%d - Cima Esquerda\n", numerador);
                    numerador++;
                    i++;
                } while(i <= y);
            }
            else if(y < 0 && y >= -5){ // Movimento Diagonal inferior
                i = -1;
                do{
                    printf("%d - Baixo Esquerda\n", numerador);
                    numerador++;
                    i--;
                }while (i >= y);
            }
            else {printf("Movimento invalido\n");}
            break;

        default:
            printf("Opção invalida\n");
            break;
    }
}

int main(){
    char opcao; // Escolher a opção do menu
    int sair = 1; // Sair iniciada como verdadeis, loop finaliza quando sair = falso

    while (sair){

        menu(); // Chamando o menu
        scanf(" %c", &opcao);

        switch (opcao)
        {
            case 'T': // Movimentação da torre: Em formato de cruz
            case 't':
                torre();
                break;

            case 'B': // Movimentação do Bispo: Em formato de x
            case 'b':
                bispo();
                break;

            case 'R': // Movimentação da rainha: Em formato de cruz e x
            case 'r':
                rainha();
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
