#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char estado[3];         
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

    printf("Informe o estado (ex: SP): ");
    scanf("%s", carta->estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("Informe a população: ");
    scanf("%d", &carta->populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta->area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1000000000.0f) / carta->populacao;
}


void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
}


void compararCartas(Carta c1, Carta c2) {
    
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("\nCarta 1 - %s (%s): %d\n", c1.nomeCidade, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d\n", c2.nomeCidade, c2.estado, c2.populacao);


    if (c1.populacao > c2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", c1.nomeCidade);
    } else if (c2.populacao > c1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", c2.nomeCidade);
    } else {
        printf("\nResultado: Empate! As duas cidades têm a mesma população.\n");
    }
}

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro de Cartas do Super Trunfo ===\n");

    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    printf("\n=== Cartas Cadastradas ===\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    compararCartas(carta1, carta2);

    return 0;
}
