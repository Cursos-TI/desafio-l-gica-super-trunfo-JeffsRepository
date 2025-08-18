#include <stdio.h>

int main(){

    //criando as variaveis para carta 1
    
    char nomePais1[35];
    char codigoDaCarta1[5];
    float area1, pib1, densidadePopulacional1, pibPerCapita1, pibBilhoes1;
    float inversoDensidade1;
    float superPoder1;
    int NumeroPontoTuristico1;
    unsigned long int populacao1;

    //criando as variaveis para carta 2
    char estado2[3];
    char nomeCidade2[35];
    char nomePais2[35];
    char codigoDaCarta2[5];
    float area2, pib2, densidadePopulacional2, pibPerCapita2, pibBilhoes2;
    float inversoDensidade2;
    float superPoder2;
    int NumeroPontoTuristico2;
    unsigned long int populacao2;
    
    //criando  variavel opcao
    int opcao;
    
    
    //imprimindo informações na tela para o usuário preencher, carta 1
    printf("Insira os dados da carta 1:\n");
    

    printf("Insira o nome do País para carta 1: ");
    scanf("%s", nomePais1);

    printf("Insira a População do País para carta 1: ");
    scanf("%lu", &populacao1);

    printf("Insira a Área do País em km² para carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB do País para carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos do País para carta 1: ");
    scanf("%d", &NumeroPontoTuristico1);
    //fim da leitura de dados da carta 1
    

    //calculando a densidade populacional da carta 1
    densidadePopulacional1 = (float)(populacao1 / area1);


    //calculando o pib per capita da carta 1
    pibBilhoes1 = pib1 * 1000000000.0; // convertendo o pib em bilhoes de reias
    pibPerCapita1 = (float)pibBilhoes1 / populacao1;
    
    
    //calculando o inverso da densidade Populacional da carta 1
    inversoDensidade1 = 1 / densidadePopulacional1;
    

    //calculando o Super Poder para carta 1
    superPoder1 = (float)(populacao1 + area1 + pibBilhoes1 + NumeroPontoTuristico1 + pibPerCapita1 + inversoDensidade1);

    
    //imprimindo informações na tela para o usuário preencher, carta 2
    printf("\nInsira os dados da carta 2:\n");
    
    //Dados para carta 2
    printf("Insira o nome do País para carta 2: ");
    scanf("%s", nomePais2);

    printf("Insira a População do País para carta 2: ");
    scanf("%lu", &populacao2);

    printf("Insira a Área do País em km² para carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB do País para carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos do País para carta 2: ");
    scanf("%d", &NumeroPontoTuristico2);
    //fim da leitura de dados da carta 2
    

    //calculando a densidade populacional da carta 2
    densidadePopulacional2 = (float)(populacao2 / area2);

    
    //calculando o pib per capita da carta 2
    pibBilhoes2 = pib2 * 1000000000.0; // convertendo o pib em bilhoes de reias
    pibPerCapita2 = (float)pibBilhoes2 / populacao2;
    
    
    //calculando o inverso da densidade Populacional da carta 2
    inversoDensidade2 = 1 / densidadePopulacional2;
    

    //calculando o Super Poder para carta 2
    superPoder2 = (float)(populacao2 + area2 + pibBilhoes2 + NumeroPontoTuristico2 + pibPerCapita2 + inversoDensidade2);
    
    //impressao de interacao com o usuario
    printf("\n\nSelecione os Atributos da carta que quer comparar\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);
    
    
    //iniciando o switch
    switch(opcao){
        
        case 1:                             //caso a entrada do usuario for 1
            if (populacao1 > populacao2){   //comparacao do atributo populacao das cartas 1 e 2
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Populacao\n");
                printf("Valores de cada: carta 1: %lu, carta 2: %lu\n", populacao1, populacao2);
                printf("Carta 1 foi a vencedora: %s\n", nomePais1);
                
            } else if (populacao1 < populacao2){ //comparacao entre cartas 1 e 2 caso a carta 2 ganhe
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Populacao\n");
                printf("Valores de cada: carta 1: %lu, carta 2: %lu\n", populacao1, populacao2);
                printf("Carta 2 foi a vencedora: %s\n", nomePais2);
                
            } else {                            //else caso for empate
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Populacao\n");
                printf("Valores de cada: carta 1: %lu, carta 2: %lu\n", populacao1, populacao2);
                printf("Empate!\n");
            }
            break;                                          // parada do case 1
        
        case 2:                                             //caso a entrada do usuario for 2
            if (area1 > area2){                             //comparacao do attributo area entre cartas 1 e 2
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Area\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", area1, area2);
                printf("Carta 1 foi a vencedora: %s\n", nomePais1);
                
            } else if (populacao1 < populacao2){            //comparacao entre cartas 1 e 2 caso a carta 2 ganhe
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Area\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", area1, area2);
                printf("Carta 2 foi a vencedora: %s\n", nomePais2);
                
            } else {                                        //else caso for empate
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Area\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", area1, area2);
                printf("Empate!\n");
            }
            break;                                          //parada do case 2
            
        case 3:                                             //caso a entrada do usuario for 3
            if (pibBilhoes1 > pibBilhoes2){                 //comparacao atributo pib
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: PIB\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", pibBilhoes1, pibBilhoes2);
                printf("Carta 1 foi a vencedora: %s\n", nomePais1);
                
            } else if (pibBilhoes1 < pibBilhoes2){           //comparacao entre cartas 1 e 2 caso a carta 2 ganhe
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: PIB\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", pibBilhoes1, pibBilhoes2);
                printf("Carta 2 foi a vencedora: %s\n", nomePais2);
                
            } else {                                        //else caso for empate
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: PIB\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", pibBilhoes1, pibBilhoes2);
                printf("Empate!\n");
            }
            break;                                          //parada do case 3
            
        case 4:                                             //caso a entrada do usuario for 4
            if (NumeroPontoTuristico1 > NumeroPontoTuristico2){ //comparacao entre cartas 1 e 2 atributo numero de pontos turisticos
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Numero de Pontos Turisticos\n");
                printf("Valores de cada: carta 1: %d, carta 2: %d\n", NumeroPontoTuristico1, NumeroPontoTuristico2);
                printf("Carta 1 foi a vencedora: %s\n", nomePais1);
                
            } else if (NumeroPontoTuristico1 < NumeroPontoTuristico2){  //comparacao entre cartas 1 e 2 caso a carta 2 ganhe
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Numero de Pontos Turisticos\n");
                printf("Valores de cada: carta 1: %d, carta 2: %d\n", NumeroPontoTuristico1, NumeroPontoTuristico2);
                printf("Carta 2 foi a vencedora: %s\n", nomePais2);
                
            } else {                                                    //else caso a comparacao saia empate
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Numero de Pontos Turisticos\n");
                printf("Valores de cada: carta 1: %d, carta 2: %d\n", NumeroPontoTuristico1, NumeroPontoTuristico2);
                printf("Empate!\n");
            }
            break;                                                      //parada do case 4
        case 5:                                                         //caso a entrada do usuario seja 5
            if (densidadePopulacional1 < densidadePopulacional2){       //comparacao de atributos Densidade Populacional entre cartas 1 e 2 
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Densidade Populacional\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Carta 1 foi a vencedora: %s\n", nomePais1);
                
            } else if (densidadePopulacional1 > densidadePopulacional2){    //comparacao caso a carta 2 ganhe
                
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);
                printf("Atributo: Densidade Populacional\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Carta 2 foi a vencedora: %s\n", nomePais2);
                
            } else {
                printf("\n\nPaises: %s e %s\n", nomePais1, nomePais2);  //else caso o resultado saia empate
                printf("Atributo: Densidade Populacional\n");
                printf("Valores de cada: carta 1: %f, carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Empate!\n");
            }
            break;                                                      //parada do case 5
            
        default :                                                       //funcao padrao caso nenhuma das escolhas acima sejam feitas
    
            printf("Selecione uma opção válida!");
        
            break;
    }

    //fim do programa
    return 0;
    
}