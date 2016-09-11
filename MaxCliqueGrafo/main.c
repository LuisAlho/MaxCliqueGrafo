//
//  main.c
//  MaxCliqueGrafo
//
//  Created by Luis Alho on 08/09/16.
//  Copyright © 2016 Luis Alho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int op;
    FILE *ficheiro;
    char nomeFicheiro[20];
    
    
    printf("Nome do ficheiro: ");
    scanf("%s", nomeFicheiro);
    //gets(nomeFicheiro);
    
    printf("ficheiro: %s", nomeFicheiro);
    
    
    if ((ficheiro = fopen(nomeFicheiro, "r")) == NULL){
        printf("Erro ao ler ficheiro");
        exit(0);
    }
    
    
    
    fclose(ficheiro);
    
    printf("TRABALHO PRATICO DE IIA\n\n\n");
    
    printf("\n1 - Trepa Colinas");
    printf("\n2 - Algoritmo Genetico");
    printf("\n3 - Metodo Hibrido");
    printf("\n4 - Sair");
    
    printf("\n\nOpcao: ");
    
    do{
        scanf("%d", &op);
    }while(op > 4 || op < 1);
    
    switch (op){

        case 1: printf("Trepa Colinas....");
                break;
        case 2: printf("Algoritmo Genetico...");
                break;
        case 3: printf("Metodo Hibrido...");
                break;
        case 4:
        default:
            exit(0);
            break;
    }
    
    
    
    
    return 0;
}