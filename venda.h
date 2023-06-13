#ifndef VENDA_H
#define VENDA_H

void menuComputadores(void);
float Valiquota(float preco);
float Vicms(float preco);
float Vfrete(float preco);
void extratoComputadores(char *produto, float frete, float aliquota, float icms, float total, char *endereco, char *estado, char *nome);
void comprarComputadores(int tipo, char *estado, char *endereco, char *nome, char vetorP[5][20],float *valorP);

void menuALimentos(void);
void extratoAlimento(char *nome, char *endereco, char *estado, char vetorP[][20], float *valor, float *qtd);
void comprarAlimentos(float *valorP, char vetorP[][20], char *nome, char *endereco, char *estado);

#endif