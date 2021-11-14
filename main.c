#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char campeao[10];
    struct no *rota;
} NO;

void formacao(){
    
    /////////// PASSO 1 ///////////
    NO *jungle = malloc(sizeof(NO));
    NO *mid = malloc(sizeof(NO));
    NO *adc = malloc(sizeof(NO));
    NO *sup = malloc(sizeof(NO));
    NO *top = malloc(sizeof(NO)); 
    
    /////////// PASSO 2 ///////////
    strcpy(jungle->campeao,"evelynn"); 
    strcpy(mid->campeao,"gwen");
    strcpy(adc->campeao,"ashe");
    strcpy(sup->campeao,"morgana");
    strcpy(top->campeao,"darius");
    
    top->rota = mid; /////////// PASSO 3.1 ///////////
    mid->rota = jungle; /////////// PASSO 3.2 ///////////
    jungle->rota = sup; /////////// PASSO 3.3 ///////////
    sup->rota = adc; /////////// PASSO 3.4 ///////////
    
    /////////// PASSO 4 ///////////
    printf("\n");
    printf("|TOP: %s| -> ", top->campeao);
    printf("|MID: %s| -> ", mid->campeao);
    printf("|JUNGLE: %s| -> ", jungle->campeao);
    printf("|SUP: %s| -> ", sup->campeao);
    printf("|ADC: %s|", adc->campeao);
}

int main(void){
    formacao();
}