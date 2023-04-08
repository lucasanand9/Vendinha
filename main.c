#include<stdio.h>

int main(){
    int n;
    printf("Escreva um numero para as seguintes opcoes:");
    printf("\n(1) Computadores");
    printf("\n(2) Alimentos\n");
    scanf("%i", &n);

if (n == 1 || n == 2){

    switch (n){
      char vetorP[5][20] = {"Cafe Santa Monica", "Red Bull", "Pipoca Yoki", "Creme de leite", "Laranja"};
      float valor[5];
      float vetorQ[5];
        case 1:
            printf("Computador\n");
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
                    int q;
                    float kg;
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
                printf("\nEndereco de entrega:"); 
                //Aqui tenho que colocar o endereço(ultilizando vetores)
                
        break;

    default:
        break;
        }
    }
}