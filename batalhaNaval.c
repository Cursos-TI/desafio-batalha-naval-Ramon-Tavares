#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    
    // matriz bidimensional
    int tabuleiro [10] [10] = {0};


    // barco na horizontal
    for (int i = 6; i <= 8; i++){
        tabuleiro[3][i] = 3;
    }

    // barco vertical
    for (int j = 0; j <= 2; j++){
        tabuleiro[j][5] = 3;
    }


    // linhas diagonal
    for (int i = 0, j = 7; i <=2; i++, j++){
        tabuleiro[i][j] = 3;
    }

    for (int i = 0, j = 2; i <=2; i++, j--){
        tabuleiro[i][j] = 3;
    }

    // cone
    for (int i = 7; i <= 9; i++){
        for (int j = 0; j < 10; j++){
            if (j >= 9 - i){
                if (j <= i - 5){
                    tabuleiro[i][j] = 5;
                }       
            }     
        } 
    }


    // octaedro
    for (int i = 3; i <= 5; i++){
        for (int j = 0; j < 10; j++){
            if (j == 2){
                tabuleiro[i][j] = 5;
            }
            if (i == 4){
                if (j == 1){
                    tabuleiro[i][j] = 5;
                }
                if (j == 3) {
                    tabuleiro[i][j] = 5;
                } 
            }    
        }   
    }


    // cruz
    for (int i = 5; i <= 9; i++){
        for (int j = 0; j < 10; j++){
            if (j == 7){
                tabuleiro[i][j] = 5;
            }
            if (i == 7){
                if (j >= 5){
                    if (j <= 9){
                        tabuleiro[i][j] = 5;
                    }  
                }  
            }
        }  
    }
    
    
    //nome do jogo
    printf("TABULEIRO BATALHA NAVAL\n");

    // letras do tabuleiro
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++){
        printf("%c ", letra);
    }
    
    printf("\n");

    // linha com os numeros e com o tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%-2d ", i + 1);

        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
