#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta de São Paulo
    char estado1[] = "São Paulo";
    char codigo1[] = "SP01";
    char nome_cidade1[] = "São Paulo";
    int populacao1 = 44539225;
    float area1 = 248600.0;
    float pib1 = 3500000000000.0;
    float pib_per_capita1 = 78600.0;
    float densidade_demografica1 = 179.1;
    int num_pontos_turisticos1 = 10;
    char pontos_turisticos1[10][50] = {
        "Avenida Paulista",
        "Parque do Ibirapuera", 
        "Museu de Arte de São Paulo (MASP)",
        "Pinacoteca do Estado",
        "Mercado Municipal de São Paulo (Mercadão)",
        "Bairro da Liberdade",
        "Catedral da Sé",
        "Estádio do Morumbi",
        "Museu do Futebol",
        "Zoológico de São Paulo"
    };
    
    // Variáveis para a Carta do Rio de Janeiro
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "RJ01";
    char nome_cidade2[] = "Rio de Janeiro";
    int populacao2 = 17219679;
    float area2 = 43696.0;
    float pib2 = 1150000000000.0;
    float pib_per_capita2 = 67100.0;
    float densidade_demografica2 = 394.2;
    int num_pontos_turisticos2 = 10;
    char pontos_turisticos2[10][50] = {
        "Cristo Redentor",
        "Pão de Açúcar",
        "Praia de Copacabana",
        "Praia de Ipanema",
        "Maracanã",
        "Jardim Botânico do Rio de Janeiro",
        "Museu do Amanhã",
        "Escadaria Selarón",
        "Arcos da Lapa",
        "Parque Nacional da Tijuca"
    };
    
    // Escolha do atributo para comparação (definido no código)
    char atributo_escolhido[] = "PIB_per_capita"; // Pode ser: Populacao, Area, PIB, PIB_per_capita, Densidade_demografica
    
    printf("=== SUPER TRUNFO DE CIDADES ===\n\n");
    
    // Exibição das informações das cartas
    printf("=== CARTAS PRÉ-DEFINIDAS ===\n\n");
    
    // Exibição da Carta de São Paulo
    printf("Carta 1 - São Paulo:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.0f\n", pib1);
    printf("PIB per capita: R$ %.0f\n", pib_per_capita1);
    printf("Densidade demográfica: %.1f hab/km²\n", densidade_demografica1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("Pontos Turísticos:\n");
    for (int i = 0; i < num_pontos_turisticos1; i++) {
        printf("  - %s\n", pontos_turisticos1[i]);
    }
    
    printf("\n");
    
    // Exibição da Carta do Rio de Janeiro
    printf("Carta 2 - Rio de Janeiro:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.0f\n", pib2);
    printf("PIB per capita: R$ %.0f\n", pib_per_capita2);
    printf("Densidade demográfica: %.1f hab/km²\n", densidade_demografica2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
    printf("Pontos Turísticos:\n");
    for (int i = 0; i < num_pontos_turisticos2; i++) {
        printf("  - %s\n", pontos_turisticos2[i]);
    }
    
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n\n");
    
    // Lógica de comparação baseada no atributo escolhido
    printf("Atributo escolhido para comparação: %s\n\n", atributo_escolhido);
    
    if (strcmp(atributo_escolhido, "Populacao") == 0) {
        // Comparação por população (maior vence)
        printf("Comparando População:\n");
        printf("São Paulo: %d habitantes\n", populacao1);
        printf("Rio de Janeiro: %d habitantes\n", populacao2);
        
        if (populacao1 > populacao2) {
            printf("\n🏆 VENCEDOR: São Paulo!\n");
            printf("São Paulo tem maior população (%d vs %d habitantes)\n", populacao1, populacao2);
        } else {
            printf("\n🏆 VENCEDOR: Rio de Janeiro!\n");
            printf("Rio de Janeiro tem maior população (%d vs %d habitantes)\n", populacao2, populacao1);
        }
    }
    else if (strcmp(atributo_escolhido, "Area") == 0) {
        // Comparação por área (maior vence)
        printf("Comparando Área:\n");
        printf("São Paulo: %.1f km²\n", area1);
        printf("Rio de Janeiro: %.1f km²\n", area2);
        
        if (area1 > area2) {
            printf("\n🏆 VENCEDOR: São Paulo!\n");
            printf("São Paulo tem maior área (%.1f vs %.1f km²)\n", area1, area2);
        } else {
            printf("\n🏆 VENCEDOR: Rio de Janeiro!\n");
            printf("Rio de Janeiro tem maior área (%.1f vs %.1f km²)\n", area2, area1);
        }
    }
    else if (strcmp(atributo_escolhido, "PIB") == 0) {
        // Comparação por PIB (maior vence)
        printf("Comparando PIB:\n");
        printf("São Paulo: R$ %.0f\n", pib1);
        printf("Rio de Janeiro: R$ %.0f\n", pib2);
        
        if (pib1 > pib2) {
            printf("\n🏆 VENCEDOR: São Paulo!\n");
            printf("São Paulo tem maior PIB (R$ %.0f vs R$ %.0f)\n", pib1, pib2);
        } else {
            printf("\n🏆 VENCEDOR: Rio de Janeiro!\n");
            printf("Rio de Janeiro tem maior PIB (R$ %.0f vs R$ %.0f)\n", pib2, pib1);
        }
    }
    else if (strcmp(atributo_escolhido, "PIB_per_capita") == 0) {
        // Comparação por PIB per capita (maior vence)
        printf("Comparando PIB per capita:\n");
        printf("São Paulo: R$ %.0f\n", pib_per_capita1);
        printf("Rio de Janeiro: R$ %.0f\n", pib_per_capita2);
        
        if (pib_per_capita1 > pib_per_capita2) {
            printf("\n🏆 VENCEDOR: São Paulo!\n");
            printf("São Paulo tem maior PIB per capita (R$ %.0f vs R$ %.0f)\n", pib_per_capita1, pib_per_capita2);
        } else {
            printf("\n🏆 VENCEDOR: Rio de Janeiro!\n");
            printf("Rio de Janeiro tem maior PIB per capita (R$ %.0f vs R$ %.0f)\n", pib_per_capita2, pib_per_capita1);
        }
    }
    else if (strcmp(atributo_escolhido, "Densidade_demografica") == 0) {
        // Comparação por densidade demográfica (menor vence)
        printf("Comparando Densidade Demográfica:\n");
        printf("São Paulo: %.1f hab/km²\n", densidade_demografica1);
        printf("Rio de Janeiro: %.1f hab/km²\n", densidade_demografica2);
        
        if (densidade_demografica1 < densidade_demografica2) {
            printf("\n🏆 VENCEDOR: São Paulo!\n");
            printf("São Paulo tem menor densidade demográfica (%.1f vs %.1f hab/km²)\n", densidade_demografica1, densidade_demografica2);
        } else {
            printf("\n🏆 VENCEDOR: Rio de Janeiro!\n");
            printf("Rio de Janeiro tem menor densidade demográfica (%.1f vs %.1f hab/km²)\n", densidade_demografica2, densidade_demografica1);
        }
    }
    
    return 0;
}
