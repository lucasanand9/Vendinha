#include <stdio.h>
#include <string.h>
#include "venda.h"


void menuComputadores(void){
            printf("Escolha um dos produtos abaixo: \n");
            printf("(1) Apple\n");
            printf("(2) Pc Intel Core i5\n");
            printf("(3) Pc Intel Core i5 8gb 240gb ssd\n");
            printf("(4) Pc Gamer completo\n");
            printf("(5) Pc Gamer Intel Core i5 8gb ram ddr3 hd ssd 480gb\n");
}

float Valiquota(float preco){
    return preco * 0.1;
}

float Vicms(float preco){
    return preco * 0.05;
}

float Vfrete(float preco){
    if(preco > 1500){
        return 0.00;
    }else{
        return 80.00;
    }
}

void extratoComputadores(char *produto, float frete, float aliquota, float icms, float total, char *endereco, char *estado, char *nome){
    printf("Aqui está seu extrato de compras %s", nome);
    printf("\n");
    printf("Produto: %s \n", produto);
    printf("Frete: %.2f \n", frete);
    printf("Aliquota: %.2f \n", aliquota);
    printf("ICMS: %.2f \n", icms);
    printf("Total a ser pago: %.2f \n",total);
    printf("Endereco de entrega:\n%s%s",endereco, estado);
    printf("\n");
}

void comprarComputadores(int tipo, char *estado, char *endereco, char *nome, char vetorP[5][20],float *valorP){
    float preco_final;
    float aliquota = 0, frete, icms;
    switch (tipo){
        case 1:
            preco_final = 9599.00;
            aliquota = Valiquota(9599.00);
            frete = Vfrete(preco_final);
            preco_final += aliquota;
            if(strcmp(estado, "SP") != 0 || strcmp(estado, "Sp") != 0 || strcmp(estado, "sp") != 0){
            icms = Vicms(9599.00);
            preco_final += icms;
            }
            preco_final += frete;   

            extratoComputadores("MacBook", frete, aliquota, icms, preco_final, endereco, estado, nome);

        break;

        case 2:
            preco_final = 1589.16;
            frete = Vfrete(preco_final);
            if(strcmp(estado, "SP") != 0 || strcmp(estado, "Sp") != 0 || strcmp(estado, "sp") != 0){
            icms = Vicms(preco_final);
            preco_final += icms;
            }
            preco_final += frete; 

            extratoComputadores("PC Intel Core i5", frete, aliquota, icms, preco_final, endereco, estado, nome);
 
        break;

        case 3:
            preco_final = 1494.80;
            frete = Vfrete(preco_final);
            if(strcmp(estado, "SP") != 0 || strcmp(estado, "Sp") != 0 || strcmp(estado, "sp") != 0){
            icms = Vicms(preco_final);
            preco_final += icms;
            }
            preco_final += frete;  

            extratoComputadores("PC Intel Core I5 8gb 240gb Ssd", frete, aliquota, icms, preco_final, endereco, estado, nome);
        break;

        case 4:
            preco_final = 2748.00;
            frete = Vfrete(preco_final);
            if(strcmp(estado, "SP") != 0 || strcmp(estado, "Sp") != 0 || strcmp(estado, "sp") != 0){
            icms = Vicms(preco_final);
            preco_final += icms;
            }
            preco_final += frete; 

            extratoComputadores("PC Gamer Completo", frete, aliquota, icms, preco_final, endereco, estado, nome);
        break;

        case 5:
            preco_final = 2748.00;
            frete = Vfrete(preco_final);
            if(strcmp(estado, "SP") != 0 || strcmp(estado, "Sp") != 0 || strcmp(estado, "sp") != 0){
            icms = Vicms(preco_final);
            preco_final += icms;
            }
            preco_final += frete; 

            extratoComputadores("PC Intel Core i5 8GB ram", frete, aliquota, icms, preco_final, endereco, estado, nome);
        break;
    }

    
    char continuar;
    printf("\nQuer comprar algum alimento?\n");
    scanf(" %c", &continuar);
    if(continuar == 's'){
        comprarAlimentos(valorP, vetorP, nome, endereco, estado);
    }
}

void menuALimentos(void){
    printf("\nQual dos produtos abaixo voce quer comprar?\n");
    printf("(0) Café santa Monica\n");
    printf("(1) Red Bull\n");
    printf("(2) Pipoca Yoki\n");
    printf("(3) Creme de leite\n");
    printf("(4) Laranja\n");
}

void extratoAlimento(char *nome, char *endereco, char *estado, char vetorP[][20], float *valor, float *qtd){
    printf("Aqui esta o extrato da compra %s\n", nome);
    printf("Pedido:\n");
    for(int i = 0; i < 5; i++){
        printf("%s: R$%.2f - quantidade: %.1f\n", vetorP[i], valor[i], qtd[i]);
    }
    float total = 0.;
    for(int i = 0; i< 5; i++){
        total += valor[i];
    }
    printf("O total foi de R$%.2f\n", total);
    printf("\n\n");
    printf("Endereco de entrega:\n");
    printf("%s%s\n", endereco, estado);
}

void comprarAlimentos(float *valorP, char vetorP[5][20], char *nome, char *endereco, char *estado){
    float valor[5] = {0,0,0,0,0};
    float vetorQ[5] = {0,0,0,0,0};
    int n, qtd;
    float kg;
    char continua;
    while(1){
        menuALimentos();

        scanf(" %i", &n);
        printf("Voce esta comprando %s\n", vetorP[n]);
        if(strcmp(vetorP[n],"Laranja") == 0){
            printf("Digite quanto kilos deseja comprar: \n");
            scanf(" %f", &kg);
            vetorQ[n] += kg;
            valor[n] += valorP[n]*kg;
        }else{
            printf("Digite a quantidade que deseja comprar: \n");
            scanf(" %i", &qtd);
            vetorQ[n] += qtd; 
            valor[n] += valorP[n]*qtd;
        }

        printf("Deseja comprar mais algum produto?(S/N)\n");
        scanf(" %c", &continua);

        if(continua == 'N'|| continua == 'n'){
            break;
        }
    }

    extratoAlimento(nome, endereco, estado, vetorP,valor, vetorQ);

}

