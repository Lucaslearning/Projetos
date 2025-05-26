#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char estado;                     
    char codigo[4];                  
    char nomeCidade[50];            
    int populacao;                  
    float area;                    
    float pib;                     
    int pontosTuristicos;         
    float densidadePopulacional;  
    float pibPerCapita;            
} Carta;

void lerCarta(Carta *carta, int numero) {
    printf("\n--- Cadastro da Carta %d ---\n", numero);

    printf("Informe a letra do estado (A a H): ");
    scanf(" %c", &carta->estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &carta->area);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1000000000.0f) / carta->populacao; 
}

void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
}

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro de Cartas do Super Trunfo ===\n");

    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    printf("\n=== Cartas Cadastradas ===\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}

