#include <stdio.h>;
#include <string.h>;

typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    // Criação de duas cartas do tipo Carta
    Carta carta1, carta2;

    // Coleta de dados da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Código: ");
    scanf(" %s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade); // Lê até encontrar um '\n'
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Coleta de dados da segunda carta
    printf("Informe os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Código: ");
    scanf(" %s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade); // Lê até encontrar um '\n'
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados das cartas
    printf("\n--- Dados das Cartas ---\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

   
    printf("\Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

