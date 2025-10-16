 // Carta 01 // Cidade 01



#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado [1];
char codigo_da_carta [3];
char nome_da_cidade [50];
int populacao;
float area_em_km²;
float pib1;
int numero_de_pontos_turisticos;

  // Área para entrada de dados

printf("estado : \n");
scanf("%c", estado);

printf("codigo da carta :\n");
scanf("%s", &codigo_da_carta);

printf("nome da cidade : \n");
scanf("%s", nome_da_cidade);

printf("populacao :\n");
scanf("%d", &populacao);

printf("area em km² :\n");
scanf("%f", &area_em_km²);

printf("pib :\n");
scanf("%f", &pib1);

printf("numero de pontos turisticos :\n");
scanf("%s", &numero_de_pontos_turisticos);

  // Área para exibição dos dados da cidade

  // CARTA 02

  char estado1[1];
char codigo_da_carta1[3];
char nome_da_cidade1[50];
int populacao1;
float area_em_km²1;
float pib3;
int numero_de_pontos_turisticos1;



  // Área para entrada de dados

  // Carta 02 // Cidade 02

printf("estado : \n");
scanf(" %c", estado1);

printf("codigo da carta :\n");
scanf(" %s", codigo_da_carta1);

printf("nome da cidade : \n");
scanf("%s", nome_da_cidade1);

printf("populacao :\n");
scanf("%d", &populacao1);

printf("area em km² :\n");
scanf("%f", &area_em_km²1);

printf("pib :\n");
scanf("%f", &pib3);

printf("numero de pontos turisticos :\n");
scanf("%s", &numero_de_pontos_turisticos1);



return 0;
} 
