#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];  // Array para armazenar código como "A01"
    char nome_cidade1[50];  // Array para nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];  // Array para armazenar código como "B02"
    char nome_cidade2[50];  // Array para nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    printf("=== SISTEMA DE CADASTRO DO SUPER TRUNFO DE PAÍSES ===\n\n");
    
    // Entrada dos dados da Carta 1
    printf("--- CADASTRANDO CARTA 1 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Entrada dos dados da Carta 2
    printf("--- CADASTRANDO CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");
    
    // Exibição das informações das cartas
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("\n");
    
    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}
