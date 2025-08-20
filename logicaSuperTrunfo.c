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
    float area, pib, densidadepopulacional;

    // Armazenamento das variáveis.
    // Carta 2:
    char estado2, codigo2[5], cidade2[40];
    unsigned long int populacao2;
    int numerodept2;
    float area2, pib2, densidadepopulacional2;

    // Armazenamento do Menu Interativo.
    int escolha = 0, escolha2 = 0, resultado = 0, resultado2 = 0;
    float somaatributos, somaatributos2;

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

    //Calcula a Densidade Populacional, utilizando os Operadores Matemáticos.
    densidadepopulacional = (float)populacao / area;

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

    // Calcula a Densidade Populacional, utilizando os Operadores Matemáticos.
    densidadepopulacional2 = (float)populacao2 / area2;

    // Apresenta a opção de escolha dos atributos comparáveis.
    printf("Bem vindo ao Jogo Super Trunfo.\n");
    printf("Neles comparamos diversos atributos para ganhar pontos.\n");
    printf("A comparação acontecerá entre as cartas seguintes cartas:\n");
    printf("Carta 1 (%s) com a cidade de %s e a Carta 2 (%s) com a cidade de %s.\n", codigo, cidade, codigo2, cidade2);
    printf("\n");
    printf("Escolha o primeiro atributo para ser comparado entres as cartas.\n");
    printf("1. População\n");
    printf("2. Área da Cidade\n");
    printf("3. PIB da Cidade\n");
    printf("4. Número de Pontos Purísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Insira o número correspondente: ");
    scanf("%d", &escolha);
    printf("\n");

    // Utiliza o valor salvo em "Escolha" para exibir uma resposta correspondente.
    switch (escolha)
    {
    case 1:
            printf("Você escolheu População.\n");
        if(populacao > populacao2){
            printf("A Carta 1 venceu a rodada com uma população de %lu, contra %lu da Carta 2! +1 ponto para o jogador 1.\n", populacao, populacao2);
        resultado++; // Adiciona 1 ponto a população.
            } else if (populacao2 > populacao) {
                printf("A Carta 2 venceu a rodada com uma população de %lu, contra %lu da Carta 1! +1 ponto para o jogador 2.\n", populacao2, populacao);
        resultado2++; // Adiciona 1 ponto a população2.
            } else {
                printf("População deu Empate!\n");
            }
        break;

    case 2:
            printf("Você escolheu Área da Cidade.\n");
        if(area > area2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", area, area2);
            resultado++;
            } else if (area2 > area) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", area2, area);
            resultado2++;
            } else {
                printf("Área deu Empate!\n");
            }
        break;
    
    case 3:
            printf("Você escolheu PIB da Cidade.\n");
        if(pib > pib2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", pib, pib2);
            resultado++;
            } else if (pib2 > pib) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", pib2, pib);
            resultado2++;
            } else {
                printf("PIB deu Empate!\n");
            }
        break;

    case 4:
        if(numerodept > numerodept2){
            printf("Você escolheu Pontos Turísticos.\n");
            printf("A Carta 1 venceu a rodada com uma população de %d, contra %d da Carta 2! +1 ponto para o jogador 1.\n", numerodept, numerodept2);
            resultado++;
            } else if (numerodept2 > numerodept){
                printf("A Carta 2 venceu a rodada com uma população de %d, contra %d da Carta 1! +1 ponto para o jogador 2.\n", numerodept2, numerodept);
            resultado2++;
            } else {
                printf("Número de Pontos Turísticos deu Empate!\n");
            }
        break;

    case 5:
        printf("Você escolheu a Densidade Populacional.\n");
        printf("a Densidade Populacional é calculada inversamente. O menor valor, ganha.\n");
        if(densidadepopulacional < densidadepopulacional2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", densidadepopulacional, densidadepopulacional2);
            resultado++;
            } else if (densidadepopulacional2 < densidadepopulacional) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", densidadepopulacional2, densidadepopulacional);
            resultado2++;
            } else {
                printf("Densidade Populacional deu Empate!\n");
            }
        break;

    default:
        printf("Opção invalida.\n");
        break;
    }

    // Apresenta a opção de escolha dos atributos comparáveis.
    printf("\n");
    printf("Escolha o segundo atributo para ser comparado entres as cartas.\n");
    printf("OS ATRIBUTOS NÃO PODEM SER IGUAIS.\n");
    printf("1. População\n");
    printf("2. Área da Cidade\n");
    printf("3. PIB da Cidade\n");
    printf("4. Número de Pontos Purísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Insira o número correspondente: ");
    scanf("%d", &escolha2);
    printf("\n");

    if(escolha == escolha2){
        printf("Escolha atributos diferentes.\n");
        printf("Jogo desligando...\n");
    } else {
    switch (escolha2)
    {
    case 1:
            printf("Você escolheu População.\n");
        if(populacao > populacao2){
            printf("A Carta 1 venceu a rodada com uma população de %lu, contra %lu da Carta 2! +1 ponto para o jogador 1.\n", populacao, populacao2);
        resultado++; // Adiciona 1 ponto a população.
            } else if (populacao2 > populacao) {
                printf("A Carta 2 venceu a rodada com uma população de %lu, contra %lu da Carta 1! +1 ponto para o jogador 2.\n", populacao2, populacao);
        resultado2++; // Adiciona 1 ponto a população2.
            } else {
                printf("População deu Empate!\n");
            }
        break;

    case 2:
            printf("Você escolheu Área da Cidade.\n");
        if(area > area2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", area, area2);
            resultado++;
            } else if (area2 > area) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", area2, area);
            resultado2++;
            } else {
                printf("Área deu Empate!\n");
            }
        break;
    
    case 3:
            printf("Você escolheu PIB da Cidade.\n");
        if(pib > pib2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", pib, pib2);
            resultado++;
            } else if (pib2 > pib) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", pib2, pib);
            resultado2++;
            } else {
                printf("PIB deu Empate!\n");
            }
        break;

    case 4:
        if(numerodept > numerodept2){
            printf("Você escolheu Pontos Turísticos.\n");
            printf("A Carta 1 venceu a rodada com uma população de %d, contra %d da Carta 2! +1 ponto para o jogador 1.\n", numerodept, numerodept2);
            resultado++;
            } else if (numerodept2 > numerodept){
                printf("A Carta 2 venceu a rodada com uma população de %d, contra %d da Carta 1! +1 ponto para o jogador 2.\n", numerodept2, numerodept);
            resultado2++;
            } else {
                printf("Número de Pontos Turísticos deu Empate!\n");
            }
        break;

    case 5:
        printf("Você escolheu a Densidade Populacional.\n");
        printf("a Densidade Populacional é calculada inversamente. O menor valor, ganha.\n");
        if(densidadepopulacional < densidadepopulacional2){
            printf("A Carta 1 venceu a rodada com uma população de %.2f, contra %.2f da Carta 2! +1 ponto para o jogador 1.\n", densidadepopulacional, densidadepopulacional2);
            resultado++;
            } else if (densidadepopulacional2 < densidadepopulacional) {
                printf("A Carta 2 venceu a rodada com uma população de %.2f, contra %.2f da Carta 1! +1 ponto para o jogador 2.\n", densidadepopulacional2, densidadepopulacional);
            resultado2++;
            } else {
                printf("Densidade Populacional deu Empate!\n");
            }
        break;

    default:
        printf("Opção invalida.\n");
        break;
    }}

    // Faz a soma para o requisito de "O valor da soma dos atributos de cada Carta".
    somaatributos = area + pib + populacao + numerodept + densidadepopulacional;
    somaatributos2 = area2 + pib2 + populacao2 + numerodept2 + densidadepopulacional2;

    // Adiciona um ponto referente ao ganhador da soma.
    if(somaatributos > somaatributos2) {
    resultado++;
    } else if ((area + pib + populacao + numerodept + densidadepopulacional) < (area2 + pib2 + populacao2 + numerodept2 + densidadepopulacional2)){
        resultado2++;
    } else {
        printf("Empate!");
    }

    // Mostra os resultados adquiridos através do jogo e da montagem das cartas.
    printf("\n");
    printf("Carta 1 (%s) | Carta 2 (%s)\n", codigo, codigo2);
    printf("Cidade: %s vs %s\n", cidade, cidade2);
    switch (escolha)
    {
    case 1: {
        printf("População: %lu vs %lu\n", populacao, populacao2);
        break;
    }
    case 2: {
        printf("Área da Cidade: %.2f vs %.2f\n", area, area2);
        break;
    } 
    case 3: {
        printf("PIB da Cidade: %.2f vs %.2f\n", pib, pib2);
        break;
    }
    case 4: {
        printf("Pontos Turísticos: %i vs %i\n", numerodept, numerodept2);
        break;
    }
    case 5: 
        printf("Densidade Populacional: %.2f vs %.2f\n", densidadepopulacional, densidadepopulacional2);
        break;
    }
    switch (escolha2)
    {
    case 1: {
        printf("População: %lu vs %lu\n", populacao, populacao2);
        break;
    }
    case 2: {
        printf("Área da Cidade: %.2f vs %.2f\n", area, area2);
        break;
    } 
    case 3: {
        printf("PIB da Cidade: %.2f vs %.2f\n", pib, pib2);
        break;
    }
    case 4: {
        printf("Pontos Turísticos: %i vs %i\n", numerodept, numerodept2);
        break;
    }
    case 5: 
        printf("Densidade Populacional: %.2f vs %.2f\n", densidadepopulacional, densidadepopulacional2);
        break;
    }
    printf("Soma dos Atributos: %.2f vs %.2f\n", somaatributos, somaatributos2);
    printf("Pontuação Final: (%i) pra Carta 1 e (%i) pra Carta 2\n", resultado, resultado2);
    if (resultado > resultado2) {
        printf("A Carta 1 ganhou!\n");
    } else if (resultado2 > resultado){
        printf("A Carta 2 ganhou!\n");
    } else {
        printf("O jogo deu empate!\n");
    }
    
    // Despedida.
    printf("Fim do Programa. Obrigada.\n");

    return 0;
}
