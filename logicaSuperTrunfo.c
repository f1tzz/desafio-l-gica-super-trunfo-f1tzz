#include <stdio.h>

int main() {
    // Variáveis 
    char nome_da_cidade1[20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    int codigo_de_carta1, codigo_de_carta2;
    char estado1, estado2;
    float AreaKm1, DensidadePopulacional1, PIBpercapita1, pib1;
    float AreaKm2, DensidadePopulacional2, PIBpercapita2, pib2;
    int numeros_pontos_turisticos1, numeros_pontos_turisticos2;
    float SuperPoder1, SuperPoder2;

    // ------------------------------------------------------------------
    // Início das entradas da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a sigla do estado (apenas uma letra): ");
    scanf(" %c", &estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_da_cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &AreaKm1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numeros_pontos_turisticos1);
    printf("Digite o código da carta (1 a 4): ");
    scanf("%d", &codigo_de_carta1);

    // Cálculos carta 1
    DensidadePopulacional1 = populacao1 / AreaKm1;
    PIBpercapita1 = pib1 / populacao1;
    SuperPoder1 = (populacao1 + AreaKm1 + pib1 + numeros_pontos_turisticos1 + (1 / DensidadePopulacional1) + PIBpercapita1);

    // ------------------------------------------------------------------
    // Início das entradas da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a sigla do estado (apenas uma letra): ");
    scanf(" %c", &estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_da_cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &AreaKm2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numeros_pontos_turisticos2);
    printf("Digite o código da carta (1 a 4): ");
    scanf("%d", &codigo_de_carta2);

    // Cálculos carta 2
    DensidadePopulacional2 = populacao2 / AreaKm2;
    PIBpercapita2 = pib2 / populacao2;
    SuperPoder2 = (populacao2 + AreaKm2 + pib2 + numeros_pontos_turisticos2 + (1 / DensidadePopulacional2) + PIBpercapita2);

    // ------------------------------------------------------------------
    // Menu de seleção de atributos
    int atributo1, atributo2;
    printf("\n=== Escolha o primeiro atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    printf("\n=== Escolha o segundo atributo (diferente do primeiro) ===\n");
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade populacional\n"); break;
                case 6: printf("6 - PIB per capita\n"); break;
                case 7: printf("7 - Super poder\n"); break;
            }
        }
    }
    printf("Escolha: ");
    scanf("%d", &atributo2);

    // ------------------------------------------------------------------
    // Comparação
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;

    // Função auxiliar com switch para obter o valor de cada atributo
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = AreaKm1; valor1_c2 = AreaKm2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = numeros_pontos_turisticos1; valor1_c2 = numeros_pontos_turisticos2; break;
        case 5: valor1_c1 = DensidadePopulacional1; valor1_c2 = DensidadePopulacional2; break;
        case 6: valor1_c1 = PIBpercapita1; valor1_c2 = PIBpercapita2; break;
        case 7: valor1_c1 = SuperPoder1; valor1_c2 = SuperPoder2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = AreaKm1; valor2_c2 = AreaKm2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = numeros_pontos_turisticos1; valor2_c2 = numeros_pontos_turisticos2; break;
        case 5: valor2_c1 = DensidadePopulacional1; valor2_c2 = DensidadePopulacional2; break;
        case 6: valor2_c1 = PIBpercapita1; valor2_c2 = PIBpercapita2; break;
        case 7: valor2_c1 = SuperPoder1; valor2_c2 = SuperPoder2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // ------------------------------------------------------------------
    // Aplicar regra da Densidade Demográfica (quanto menor, melhor)
    float pontos_c1 = 0, pontos_c2 = 0;

    // Comparar primeiro atributo
    if (atributo1 == 5)
        (valor1_c1 < valor1_c2) ? (pontos_c1++) : (pontos_c2++);
    else
        (valor1_c1 > valor1_c2) ? (pontos_c1++) : (pontos_c2++);

    // Comparar segundo atributo
    if (atributo2 == 5)
        (valor2_c1 < valor2_c2) ? (pontos_c1++) : (pontos_c2++);
    else
        (valor2_c1 > valor2_c2) ? (pontos_c1++) : (pontos_c2++);

    // Soma total dos atributos (para desempate)
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Carta 1: %s (%.2f + %.2f = %.2f)\n", nome_da_cidade1, valor1_c1, valor2_c1, soma1);
    printf("Carta 2: %s (%.2f + %.2f = %.2f)\n", nome_da_cidade2, valor1_c2, valor2_c2, soma2);

    // ------------------------------------------------------------------
    // Resultado final
    if (soma1 == soma2)
        printf("\nResultado: Empate!\n");
    else if (soma1 > soma2)
        printf("\nVencedora: Carta 1 - %s!\n", nome_da_cidade1);
    else
        printf("\nVencedora: Carta 2 - %s!\n", nome_da_cidade2);

    printf("\nFim do jogo!\n");
    return 0;
}