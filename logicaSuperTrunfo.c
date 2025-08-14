#include <stdio.h>

int main(){

    //criando as variaveis para carta 1
    char estado1[3] = "SP";
    char nomeCidade1[35] = "Sao_Paulo";
    char codigoDaCarta1[5] = "SP01";
    float area1 = 1521.11, pib1 = 699.28, densidadePopulacional1, pibPerCapita1, pibBilhoes1;
    float inversoDensidade1;
    float superPoder1;
    int NumeroPontoTuristico1 = 50;
    unsigned long int populacao1 = 12325000;

    //criando as variaveis para carta 2
    char estado2[3] = "RJ";
    char nomeCidade2[35] = "Rio_de_Janeiro";
    char codigoDaCarta2[5] = "B02";
    float area2 = 1200.25, pib2 = 300.50, densidadePopulacional2, pibPerCapita2, pibBilhoes2;
    float inversoDensidade2;
    float superPoder2;
    int NumeroPontoTuristico2 = 30;
    unsigned long int populacao2 = 6748000;
    
    /*
    //iniciando variaveis de comparacao:
    float resultadoArea, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoPibBilhoes;
    float resultadoInversoDensidade, resultadoSuperPoder;
    unsigned long int resultadoPopulacao;
    int resultadoNumeroPontoTuristico;
    
    
    //imprimindo informações na tela para o usuário preencher, carta 1
    printf("Insira os dados da carta 1:\n");
    
    //Dados para carta 1
    printf("Insira uma letra de A-H para a carta 1 (representando um dos 8 estados): "); //pedindo ao usuário para digitar o dado requerido
    scanf("%c", &estado1); //Leitura do dado digitado

    printf("Insira o codigo para carta 1 (Ex.: A01, B02 e assim por diante): "); 
    scanf("%s", codigoDaCarta1);

    printf("Insira o nome da cidade para carta 1: ");
    scanf("%s", nomeCidade1);

    printf("Insira a População da Cidade para carta 1: ");
    scanf("%lu", &populacao1);

    printf("Insira a Área da Cidade em km² para carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da Cidade para carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da Cidade para carta 1: ");
    scanf("%d", &NumeroPontoTuristico1);
    //fim da leitura de dados da carta 1
    */

    //calculando a densidade populacional da carta 1
    densidadePopulacional1 = (float)(populacao1 / area1);


    //calculando o pib per capita da carta 1
    pibBilhoes1 = pib1 * 1000000000.0; // convertendo o pib em bilhoes de reias
    pibPerCapita1 = (float)pibBilhoes1 / populacao1;
    
    
    //calculando o inverso da densidade Populacional da carta 1
    inversoDensidade1 = 1 / densidadePopulacional1;
    

    //calculando o Super Poder para carta 1
    superPoder1 = (float)(populacao1 + area1 + pibBilhoes1 + NumeroPontoTuristico1 + pibPerCapita1 + inversoDensidade1);

    /*
    //imprimindo informações na tela para o usuário preencher, carta 2
    printf("\nInsira os dados da carta 2:\n");
    
    //Dados para carta 2
    printf("Insira uma letra de A-H para a carta 2 (representando um dos 8 estados): "); //pedindo ao usuário para digitar o dado requerido
    scanf(" %c", &estado2); //Leitura do dado digitado

    printf("Insira o codigo do Estado para carta 2 (Ex.: A01, B02 e assim por diante): "); 
    scanf("%s", codigoDaCarta2);

    printf("Insira o nome da cidade para carta 2: ");
    scanf("%s", nomeCidade2);

    printf("Insira a População da Cidade para carta 2: ");
    scanf("%lu", &populacao2);

    printf("Insira a Área da Cidade em km² para carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da Cidade para carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da Cidade para carta 2: ");
    scanf("%d", &NumeroPontoTuristico2);
    //fim da leitura de dados da carta 2
    */

    //calculando a densidade populacional da carta 2
    densidadePopulacional2 = (float)(populacao2 / area2);

    
    //calculando o pib per capita da carta 2
    pibBilhoes2 = pib2 * 1000000000.0; // convertendo o pib em bilhoes de reias
    pibPerCapita2 = (float)pibBilhoes2 / populacao2;
    
    
    //calculando o inverso da densidade Populacional da carta 2
    inversoDensidade2 = 1 / densidadePopulacional2;
    

    //calculando o Super Poder para carta 2
    superPoder2 = (float)(populacao2 + area2 + pibBilhoes2 + NumeroPontoTuristico2 + pibPerCapita2 + inversoDensidade2);
    
    
    
    //início das impressoes dos dados digitados referente a carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontoTuristico1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    //fim das impressoes na tela carta 1


    
    //início das impressoes dos dados digitados referente a carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontoTuristico2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    //fim das impressoes na tela carta 2



    //iniciando comparacoes das cartas 1 e 2 em estrutura de controle:
    
    printf("\n\n(Atributo: Area em Km2): \n");                              //Atributo a ser comparado
    if (area1 > area2){                                                     //verificacao se qual area é maior
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, area1);   //impressao de resultado caso seja verdadeiro
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);          //impressao do nome da cidade vencedora
    } else {                                                                //caso as linhas acima não seja verdadeira, vem pra essa estrutura de condicao
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, area2);   //impressao de resultado caso as linhas acima não sejam verdadeiras
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);          //impressao do nome da cidade vencedora
    }
    
    
    
    printf("\n(Atributo: Densidade Populacional): \n");
    if (densidadePopulacional1 < densidadePopulacional2){
        printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, densidadePopulacional1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);
    } else {
        printf("\nCarta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, densidadePopulacional2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);
    }
    
    
    
    printf("\n(Atributo: PIB per Capita): \n");
    if (pibPerCapita1 > pibPerCapita2){
        printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);
    } else {
        printf("\nCarta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);        
    }
    
    
    
    printf("\n(Atributo: PIB): \n");
    if (pibBilhoes1 > pibBilhoes2){
        printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibBilhoes1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);
    } else {
        printf("\nCarta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibBilhoes2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);        
    }
    
    
    
    printf("\n(Atributo: Super Poder): \n");
    if (superPoder1 > superPoder2){
        printf("\nCarta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, superPoder1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);        
    } else {
        printf("\nCarta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, superPoder2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);        
    }
    
    
    
    printf("\n(Atributo: Populacao): \n");
    if (populacao1 > populacao2){
        printf("\nCarta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);        
    } else {
        printf("\nCarta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);        
    }    
    
    
    
    printf("\n(Atributo: Numeros de Pontos Turísticos): \n");
    if (NumeroPontoTuristico1 > NumeroPontoTuristico2){
        printf("\nCarta 1 - %s (%s): %d\n", nomeCidade1, estado1, NumeroPontoTuristico1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nomeCidade1);        
    } else {
        printf("\nCarta 2 - %s (%s): %d\n", nomeCidade2, estado2, NumeroPontoTuristico2);
        printf("Resultado: Carta 2 (%s) venceu! \n", nomeCidade2);        
    }
    //fim das comparacoes entre cartas 1 e 2 e fim da estrutura de contole
    
    
    
    /*
    //impressao do resultado das comparacoes entre cartas 1 e 2:
    printf("\nComparacao de Cartas: \n");
    printf("Populacao: Carta 1 venceu (%d)\n", (int)resultadoPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", (int)resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", (int)resultadoPibBilhoes);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (int)resultadoNumeroPontoTuristico);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (int)resultadoDensidadePopulacional);
    printf("PIB Per Capita: Carta 1 venceu (%d)\n", (int)resultadoPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", (int)resultadoSuperPoder);
    */
    
    
    //fim do programa
    return 0;
    
}
