#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[50];
  char Codigo_da_carta [50];
  char Nome_da_cidade [50];
  int Populacao;
  float Area_em_Km;
  // Área para entrada de dados
  printf("Insira o Estado: \n");
  scanf("%s", &Estado);

  printf("Insira o Codigo da carta: ");
  scanf("%s", &Codigo_da_carta);

  printf("Insira o nome da cidade: ");
  scanf("%s", Nome_da_cidade);

  printf("Insira o numero da populacao: ");
  scanf("%d", Populacao);

  printf("Insira a area em km: ");
  scanf("%f", Area_em_Km);
// Área para exibição dos dados da cidade

return 0;
} 
