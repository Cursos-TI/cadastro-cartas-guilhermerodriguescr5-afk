#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidade // 
int carta;
char estado[50];
char código[50];
char Cidade[50];
int População;
float Área;
float PIB;
int  Turísmo;


  // Área para entrada de dados
printf("Digite seu estado: ");
scanf("%s", &estado);

printf("Digite o código do país: ");
scanf("%s", &código);

printf("Digite o nome da cidade: ");
scanf("%s", &Cidade);

printf("Digite a população: ");
scanf("%d", &População);

printf("Digite a área: ");
scanf("%f", &Área);

printf("Digite o PIB: ");
scanf("%f", &PIB);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", &Turísmo);


  // Área para exibição dos dados da cidade//
  printf("estado: %s\n", estado);

  printf("código: %s\n", código);

  printf("cidade: %s\n", Cidade);

  printf("população: %d\n", População);

  printf("área: %.2f\n", Área);
  
  printf("PIB: %.2f\n", PIB);
  
  printf("pontos turísticos: %d\n", Turísmo);
return 0;
} 
