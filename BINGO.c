#include <stdio.h>

#define ELEMCARTELA 5
#define NUMBINGO 75

void preencheCartela (int C[ELEMCARTELA] [ELEMCARTELA], int s[NUMBINGO]);

int verifCartelaCheia (int C[ELEMCARTELA] [ELEMCARTELA], int s[NUMBINGO]);

int main(){

    int cartela [ELEMCARTELA] [ELEMCARTELA] = {

    {2,30,41,53,61},
    {11,26,34,50,74},
    {4,21,33,58,68},
    {8,19,35,60,73},
    {12,22,39,52,72}};

    int sorteados[NUMBINGO] = {0};

    sorteados[2]= 1;
    sorteados [30]= 1;

    preencheCartela (cartela, sorteados);

    return 0;
}

void preencheCartela ( int C[ELEMCARTELA] [ELEMCARTELA], int s[NUMBINGO]){
    int i, j;

    for (i=0;i<ELEMCARTELA;i++){
        for(j=0;j<ELEMCARTELA;j++){
            if(s[C[i][j]] == 1)
                printf(" * ");
            else
                printf(" %d ", C [i] [j]);
        }
                printf("\n");
    }

}

int verifCartelaCheia (int C[ELEMCARTELA] [ELEMCARTELA], int s[NUMBINGO]){
    int i, j;

    for(i=0;i<ELEMCARTELA;i++){
        for(j=0;j<ELEMCARTELA;j++){
            if (s[C [i] [j]] == 0 )
                return 0;
        }
    }
}



