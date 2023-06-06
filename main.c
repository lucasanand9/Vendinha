#include<stdio.h>
#include<string.h>
void menuComputadores(void);
float Valiquota(float preco);
float Vicms(float preco);
float Vfrete(float preco);
void extratoComputadores(char *produto, float frete, float aliquota, float icms, float total, char *endereco, char *estado, char *nome);
void comprarComputadores(int tipo, char *estado, char *endereco, char *nome);

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
    printf("Aqui está seu extrato de compras %s:", nome);
    printf("\n");
    printf("Produto: %s \n", produto);
    printf("Frete: %.2f \n", frete);
    printf("Aliquota: %.2f \n", aliquota);
    printf("ICMS: %.2f \n", icms);
    printf("Total a ser pago: %.2f \n",total);
    printf("Endereco de entrega:\n%s%s",endereco, estado);
    printf("\n");
}

void comprarComputadores(int tipo, char *estado, char *endereco, char *nome){
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

    

    printf("\nQuer comprar algum alimento?\n");

}



int main(){
    int n;
    char estado[3];
    char nome[100];
    char endereco[250];

    char vetorP[5][20] = {"Cafe Santa Monica", "Red Bull", "Pipoca Yoki", "Creme de leite", "Laranja"};
    float valor[5] = {0,0,0,0,0};
    float vetorQ[5] = {0,0,0,0,0};

    printf("Digite seu nome:\n");
    fgets(nome, 100, stdin);
    printf("Digite seu estado(Ex:SP, ultilizando letras maiusculas):\n");
    fgets(estado, 3, stdin);
    getchar();
    printf("Digite sua cidade, rua, numero e cep:\n");
    fgets(endereco, 250, stdin);
    printf("\n***Dados cadastrados***\n");
    
    printf("\nEscreva um numero para as seguintes opcoes:");
    printf("\n(1) Computadores");
    printf("\n(2) Alimentos\n");
    scanf("%i", &n);

if (n == 1 || n == 2){

    switch (n){

        case 1:
            int p;
            float valorPc;
            float frete = 80;
            float icms;
            
            menuComputadores();

            scanf("%i", &p);

            comprarComputadores(p, estado, endereco, nome);

        break;
    
        case 2:
            int w = 0;
            while (w != 2){
                printf("\nQuer comprar mais algum produto?\n");
                printf("(1) Sim\n");
                printf("(2) Nao, finalizar compras\n");
                scanf("%i", &w);

                if (w == 1)
                {
                    int p;
                    int q = 0;
                    float kg = 0;
                    float valorP;
                    float ValorKg;
                    
                    
                    printf("\nQual dos produtos abaixo voce quer comprar?\n");
                    printf("(1) Café santa Monica\n");
                    printf("(2) Red Bull\n");
                    printf("(3) Pipoca Yoki\n");
                    printf("(4) Creme de leite\n");
                    printf("(5) Laranja\n");
                    scanf("%i", &p);

                    switch (p){
                    case 1:
                        printf("Café\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        vetorQ[0] = q;
                        valorP = q  * 57.04;
                        valor[0] = valorP;

                    break;
                    
                    case 2:
                        printf("red bull\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        vetorQ[1] = q;
                        valorP = q * 193.90;
                        valor[1] = valorP;
                    break;

                    case 3:
                        printf("pipoca\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        vetorQ[2] = q;
                        valorP = q * 1.88;
                        valor[2] = valorP;
                    break;

                    case 4:
                        printf("creme de leite\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        vetorQ[3] = q;
                        valorP = q * 6.57;
                        valor[3] = valorP;
                    break;

                    case 5:
                        printf("laranja\n");
                        printf("Digite quantos kilos voce vai comprar: \n");
                        scanf("%f", &kg);
                        vetorQ[4] = kg;
                        ValorKg = kg * 8.15;
                        valor[4] = ValorKg;
                    break;

                    default:
                        break;
                    }


                }
                
            }
            //mostrar o total
            printf("Alimentos e Bebidas compradas:\n");
            for (int i = 0; i < 5; i++){
                //verificar o porque as strings nao estao sendo imprimidas
                printf("%i: %s - %.1f Quantidades\n", i+1, vetorP[i], vetorQ[i]);
                printf("O valor eh: %.2f Reais\n",valor[i]);
            }

            float valorT = 0;
            for(int i; i < 5; i++){
                valorT = valorT + valor[i];
            }
    
                printf("\nO Frete: gratis");
                printf("\nValor total a ser pago é %.2f Reais.", valorT);
                printf("\nEndereco de entrega:\n"); 
                printf("%s\n", endereco);
                printf("%s\n", estado);
                
        break;

    default:
        break;
        }
    }
}