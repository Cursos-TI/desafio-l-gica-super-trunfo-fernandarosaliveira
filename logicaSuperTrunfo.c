#include <stdio.h> 
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Armazenamento das variáveis.
    // Carta 1:
    char estado, codigo[5], cidade[40];
    unsigned long int populacao;
    int numerodept;
    float area, pib, densidadepopulacional, inversodensidade, pibpercapita, superpoder;

    // Armazenamento das variáveis.
    // Carta 2:
    char estado2, codigo2[5], cidade2[40];
    unsigned long int populacao2;
    int numerodept2;
    float area2, pib2, densidadepopulacional2, inversodensidade2, pibpercapita2, superpoder2;

    // Introdução.
    printf("--- Bem vindo ao Programa de Cadastro de Cartas ---");
    printf("Vamos começar preenchendo as informações da primeira carta.\n");

    // Preenchimento das variáveis através do scanf com entrada padrão para a carta 1.
    printf("Represente um estado com uma letra de A a H:\n");
    scanf(" %c", &estado);

    printf("Insira um código para a sua carta:\n");
    scanf("%s", codigo);

    printf("Insira uma cidade do estado escolhido:\n");
    scanf(" "); // Limpa o buffer de entrada.
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Insira a população da cidade:\n");    
    scanf("%lu", &populacao);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numerodept);

    printf("Qual a area dessa cidade em km²?\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade? (em bilhões de reais)\n");
    scanf("%f", &pib);
    printf("\n");

    //Calcula a Densidade Populacional, o Inverso da Densidae, O SuperPoder e o PIB per Capita, utilizando os Operadores Matemáticos.
    densidadepopulacional = (float)populacao / area;
    pibpercapita = (pib * 1000000000.0f) / (float)populacao;
    superpoder = (float)populacao + area + pib + pibpercapita + (1.0f / densidadepopulacional) + numerodept;

    // Preenchimento das variáveis através do scanf com entrada padrão para a carta 2.
    printf("Agora a segunda carta.\n");
    printf("Represente um estado com uma letra de A a H:\n");
    scanf(" %c", &estado2);

    printf("Insira um código para a sua carta:\n");
    scanf(" %s", codigo2);

    printf("Insira uma cidade do estado escolhido:\n");
    scanf(" "); // Limpa o buffer de entrada.
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Insira a população da cidade:\n");    
    scanf("%lu", &populacao2);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &numerodept2);

    printf("Qual a area dessa cidade em km²?\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade? (em bilhões de reais)\n");
    scanf("%f", &pib2);
    printf("\n");

    // Calcula a Densidade Populacional, o Inverso, O SuperPoder e o PIB per Capita, utilizando os Operadores Matemáticos.
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pibpercapita2 + (1.0f / densidadepopulacional2) + numerodept2;

    // Exibe as informações da carta 1 contidas nas variáveis através do printf para o usuário.
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s  \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área da Cidade: %.2f km² \n", area);
    printf("PIB da Cidade: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Purísticos: %d \n", numerodept);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais \n", pibpercapita);
    printf("\n");

    // Exibe as informações da carta 2 contidas nas variáveis através do printf para o usuário.
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s  \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área da Cidade: %.2f km² \n", area2);
    printf("PIB da Cidade: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numerodept2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf("\n");

    // Exibe o resultado da comparação das duas cartas usando if-else.
    printf("Comparação das Cartas (Atributo: População)\n");
    if (populacao > populacao2){
        printf("Parabéns a Carta 1 é a vencedora!\n");}
        else{
        printf("Parabéns a Carta 2 é a vencedora!\n");}
    
    // Despedida.
    printf("Fim do Programa. Obrigada.");
    printf("\n");

    return 0;
}



    



    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // printf("População: a Carta %d venceu! (%d)\n", res_pop ? 1 : 2, res_pop); 
    // printf("Área da Cidade: a Carta %d venceu! (%d)\n", res_area ? 1 : 2, res_area); 
    // printf("PIB da Cidade: a Carta %d venceu! (%d)\n", res_pib ? 1 : 2, res_pib);
    // printf("Numero de Pontos Turisticos: a Carta %d venceu! (%d)\n", res_pt ? 1 : 2, res_pt);
    // printf("Densidade Populacional: a Carta %d venceu! (%d)\n", res_densidade ? 1 : 2, res_densidade);
    // printf("PIB per Capita: a Carta %d venceu! (%d)\n", res_pibpc ? 1 : 2, res_pibpc);
    // printf("Superpoder: a Carta %d venceu! (%d)\n", res_superpoder ? 1 : 2, res_superpoder);
    // printf("\n");

