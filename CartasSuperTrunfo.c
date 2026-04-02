#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidade // 
char estado1[50], estado2[50];
char código1[50], código2[50];
char Cidade1[50], Cidade2[50];
int População1, População2;
float Área1, Área2;
float PIB1, PIB2;
int Turísmo1, Turísmo2;

//carta 01//
  // Área para entrada de dados

printf("Digite seu estado:");
scanf("%s", estado1);

printf("Digite o código do país:");
scanf("%s", código1);

printf("Digite o nome da cidade:");
scanf("%s", Cidade1);

printf("Digite a população: ");
scanf("%d", &População1);

printf("Digite a área: ");
scanf("%f", &Área1);

printf("Digite o PIB: ");
scanf("%f", &PIB1);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", &Turísmo1);


//carta 02//
  // Área para entrada de dados 
printf("Digite seu estado: ");
scanf("%s", estado2);

printf("Digite o código do país:");
scanf("%s", código2);

printf("Digite o nome da cidade:");
scanf("%s", Cidade2);

printf("Digite a população: ");
scanf("%d", &População2);

printf("Digite a área: ");
scanf("%f", &Área2);

printf("Digite o PIB: ");
scanf("%f", &PIB2);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", &Turísmo2);
//carta 01//
  // Área para exibição dos dados da cidade//

  printf("carta 01: \n");

  printf("estado: %s\n", estado1);

  printf("código: %s\n", código1);

  printf("cidade: %s\n", Cidade1);

  printf("população: %d\n", População1);

  printf("área: %f\n", Área1);
  
  printf("PIB: %f\n", PIB1);
  
  printf("pontos turísticos: %d\n", Turísmo1);

//carta 02//
// Área para exibição dos dados da cidade//
  printf("carta 02: \n");

  printf("estado: %s\n", estado2);

  printf("código: %s\n", código2);

  printf("cidade: %s\n", Cidade2);

  printf("população: %d\n", População2);

  printf("área: %f\n", Área2);
  
  printf("PIB: %f\n", PIB2);
  
  printf("pontos turísticos: %d\n", Turísmo2);

 
return 0;
} 
