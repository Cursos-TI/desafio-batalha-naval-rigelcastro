#include <stdio.h>

int main(){

    int i, j, count = 10;
    int tabuleiro[10][10];
    char alfabeto[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // inicializando tabuleiro[i][j] com valor 0
    for(i = 0; i < count; i++){
        for (j = 0; j < count; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //loop inclui os navios no tabuleiro
    for(i = 4, j = 1; i < 7, j < 4; i++, j++){
        tabuleiro[6][i] = 3;  // navio horizontal
        tabuleiro[j][8] = 3;  // navio vertical
    }

    for(i = 0; i < count; i++){
        if(i == 0){
            printf("   %c ", alfabeto[i]);
        }else{
            printf("%c ", alfabeto[i]);
        }
        
    }
    printf("\n");
    for (i = 0; i < count; i++){
        if(i != count-1){
            printf("%d  ", i+1);
        }else{
            printf("%d ", i+1);
        }
        for (j = 0; j < count; j++){
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }
    

    return 0;
}
