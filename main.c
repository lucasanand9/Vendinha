#include<stdio.h>

int main(){
    int n;
    printf("Escreva um numero para as seguintes opcoes:");
    printf("\n(1) Computadores");
    printf("\n(2) Alimentos\n");
    scanf("%i", &n);

if (n == 1 || n == 2){

    switch (n){
        case 1:
            printf("Computador\n");
        break;
    
        case 2:
            int w = 0;
            while (w != 2){
                printf("\nQuer comprar mais algum produto?\n");
                printf("(1) Sim\n");
                printf("(2) Nao\n");
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
                        valorP = q  * 57.04;
                        printf("\nO valor é %.2f$", valorP);

                    break;
                    
                    case 2:
                        printf("red bull\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        valorP = q * 193.90;
                        printf("\nO valor é %.2f$", valorP);
                    break;

                    case 3:
                        printf("pipoca\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        valorP = q * 1.88;
                        printf("\nO valor é %.2f$", valorP);
                    break;

                    case 4:
                        printf("creme de leite\n");
                        printf("Digite a quantidade desejada: \n");
                        scanf("%i", &q);
                        valorP = q * 6.57;
                        printf("\nO valor é %.2f$", valorP);
                    break;

                    case 5:
                        printf("laranja\n");
                        printf("Digite quantos kilos voce vai comprar: \n");
                        scanf("%f", &kg);
                        ValorKg = kg * 8.15;
                        printf("\nO valor é %.2f$", ValorKg);
                    break;

                    default:
                        break;
                    }


                }
                
            }
                printf("\nTenha um bom dia! \nVolte sempre!\n");
            break;

    default:
        break;
        }
    }
}