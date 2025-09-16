#include <stdio.h>
int main(){
    // Variáveis 
    char nome_da_cidade1[30], nome_da_cidade2[30];
    unsigned long int populacao1, populacao2;
    int codigo_de_carta;
    char estado;
    float AreaKm1, DensidadePopulacional1, PIBpercapita1;
    float AreaKm2, DensidadePopulacional2, PIBpercapita2;
    float pib1, pib2;
    int numeros_pontos_turisticos1, numeros_pontos_turisticos2;
    
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 1
    
    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade1);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm1);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos1);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional1 = populacao1 / AreaKm1;
    PIBpercapita1 = pib1 / populacao1;
    
    // Saída carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.3f km²\n", AreaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos1);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per capita: %f mil reais\n", PIBpercapita1);
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 2
    
    printf("Segunda carta\n");

    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade2);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos2);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional2 = populacao2 / AreaKm2;
    PIBpercapita2 = pib2 / populacao2;
   
    // Saída carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.3f km²\n", AreaKm2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos2);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per capita: %f mil reais\n", PIBpercapita2);
    
    // ------------------------------------------------------------------
    // comparações
    if (pib1 > pib2) {
        printf(!"A carta %s é a vencedora!\n", nome_da_cidade1);
    } else {
        printf(!"A carta %s é a vencedora!\n", nome_da_cidade2);
    }
    if (populacao1 > populacao2) {
        printf(!"A carta %s é a vencedora!\n", nome_da_cidade1);  
    } else {
        printf(!"A carta %s é a vencedora!\n", nome_da_cidade2);
    }
    if (AreaKm1 > AreaKm2) {
        printf(!"A carta %s é a vencedora!\n", nome_da_cidade1);
    } else {
        printf(!"A carta %s é a vencedora!\n", __NO_INLINE__);
     return 0;
}
   

