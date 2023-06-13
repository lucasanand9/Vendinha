#include<stdio.h>
#include<string.h>
#include"venda.h"

char vetorP[5][20] = {"Cafe Santa Monica", "Red Bull- 24 Latas", "Pipoca Yoki", "Creme de leite", "Laranja"};
float valorP [5] = {57.04, 193.90,1.88, 6.57, 8.15};

int main(){
    int n;
    char estado[3];
    char nome[100];
    char endereco[250];
    
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

            comprarComputadores(p, estado, endereco, nome, vetorP, valorP);

        break;
    
        case 2:
            
        comprarAlimentos(valorP, vetorP, nome, endereco, estado);
                
         break;   
       
    }
}
}