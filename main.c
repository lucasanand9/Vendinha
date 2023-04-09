#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char estado[3];
    char nome[50];
    char endereco[100];

    char vetorP[5][20] = {"Cafe Santa Monica", "Red Bull", "Pipoca Yoki", "Creme de leite", "Laranja"};
    float valor[5] = {0,0,0,0,0};
    float vetorQ[5] = {0,0,0,0,0};

    printf("Digite seu nome:\n");
    fgets(nome, 50, stdin);
    printf("Digite seu estado(Ex:SP, ultilizando letras maiusculas):\n");
    fgets(estado, 3, stdin);
    getchar();
    printf("Digite sua cidade, rua, numero e cep:\n");
    fgets(endereco, 100, stdin);
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
            printf("Escolha um dos produtos abaixo: \n");
            printf("(1) Apple\n");
            printf("(2) Pc Intel Core i5\n");
            printf("(3) Pc Intel Core i5 8gb 240gb ssd\n");
            printf("(4) Pc Gamer completo\n");
            printf("(5) Pc Gamer Intel Core i5 8gb ram ddr3 hd ssd 480gb\n");

            scanf("%i", &p);

            switch(p){
                case 1:
                    float aliquota = 9599.99 * 0.10;

                    if(strcmp(estado, "SP") == 0){ 
                        valorPc = 9599.99 + aliquota;
                        icms = 0.00;
                    }
                    else{
                        icms = valorPc * 0.05;
                        valorPc = icms + aliquota;
                    };
                    if(valorPc < 1800.00){
                        valorPc = valorPc + frete;
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nApple");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: %.2f", aliquota);
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);
                        break;
                    }
                    
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nApple");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: %.2f", aliquota);
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);

                break;

                case 2:
                valorPc = 1589.00;
                     if(strcmp(estado, "SP") == 0){
                        icms = 0.00;
                        return valorPc;
                    }
                    else{
                        icms = valorPc * 0.05;
                        valorPc = valorPc + icms ;
                    };
                    if(valorPc < 1800.00){
                        valorPc = valorPc + frete;
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);
                        break;
                    }
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);

                    
                    
                break;

                case 3:
                valorPc = 1494.00;
                    if(strcmp(estado, "SP") == 0){
                        icms = 0.00;
                        return valorPc;
                        }
                    else{
                        icms = valorPc * 0.05;
                        valorPc = valorPc + icms ;
                    };
                    if(valorPc < 1800.00){
                        valorPc = valorPc + frete;
                        valorPc = valorPc;
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5 8gb 240gb ssd");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);
                        break;
                    }
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5 8gb 240gb ssd");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);

                    
                    
                break;
                    
                case 4:
                valorPc = 2748.00;
                    if(strcmp(estado, "SP") == 0){
                        icms = 0.00;
                        return valorPc;
                    }
                    else{
                        icms = valorPc * 0.05;
                        valorPc = valorPc + icms ;
                    };
                    if(valorPc < 1800.00){
                        valorPc = valorPc + frete;
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Gamer completo");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);
                        break;
                    }
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc  Gamer completo");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);

                    

                break;

                case 5:
                valorPc = 1693.00;
                    if(strcmp(estado, "SP") == 0){
                        icms = 0.00;
                        return valorPc;
                    }
                    else{
                        icms = valorPc * 0.05;
                        valorPc = valorPc + icms ;
                    };
                    if(valorPc < 1800.00){
                        valorPc = valorPc + frete;
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5 8gb ram ddr3 480gb hd ssd");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);
                        break;
                    }
                        //saida
                            printf("\n%s", nome);
                            printf("\nquantidade: 1");
                            printf("\nPc Intel Core i5 8gb ram ddr3 480gb hd ssd");
                            printf("\nFrete: %.2f", frete);
                            printf("\nAliquota: 0.00");
                            printf("\nICMS: %.2f", icms);
                            printf("\nTotal: %.2f", valorPc);
                            printf("\nEndereço de entrega:");
                            printf("%s", endereco);
                            printf("%s\n", estado);

                    
                    
                break;
            }
            




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