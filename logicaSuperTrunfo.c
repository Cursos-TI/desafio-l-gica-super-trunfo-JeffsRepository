#include <stdio.h>
#include <string.h>

int main(){

    //criando as variaveis para carta 1
    
    char nomePais1[35];
    char codigoDaCarta1[5];
    float area1, pib1, densidadePopulacional1, pibPerCapita1, pibBilhoes1;
    float inversoDensidade1;
    float superPoder1;
    int NumeroPontoTuristico1;
    unsigned long int populacao1;
    float soma11 = 0.0;
    float soma21 = 0.0;

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
    float soma2_1 = 0.0;
    float soma2_2 = 0.0;
    
    //criando variaveis de comparacao
    int atributo1, atributo2;
    int resultado1, resultado2;
    char nomeAtributo1[35];
    char nomeAtributo2[35];
    float valorCarta1_1 = 0;
    float valorCarta2_1 = 0;
    float valorCarta1_2 = 0;
    float valorCarta2_2 = 0;
    
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
    printf("\n\n##### Bem-vindo ao jogo #####\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    
    printf("Escolha a comparacao: ");
    scanf("%d", &atributo1);
    
    
    //iniciando o switch
    switch(atributo1){
        
        case 1: //caso escolha a opcao 1 - comparar Populacao entre cartas 1 e 2
            resultado1 = populacao1 > populacao2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo1, "Populacao");
            soma11 = populacao1; //armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_1 = populacao2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_1 = populacao1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_1 = populacao2; //armazenando valores da carta 2 para somar posteriormente
            break;
            
        case 2: //caso escolha a opcao 2 - comparar Area entre cartas 1 e 2
            resultado1 = area1 > area2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo1, "Area"); // variavel recebe o nome do atributo comparado
            soma11 = area1; //armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_1 = area2;//armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_1 = area1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_1 = area2; //armazenando valores da carta 2 para somar posteriormente
            break;
            
        case 3: //caso escolha a opcao 3 - comparar PIB entre cartas 1 e 2
            resultado1 = pibBilhoes1 > pibBilhoes2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo1, "PIB"); // variavel recebe o nome do atributo comparado
            soma11 = pibBilhoes1; //armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_1 = pibBilhoes2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_1 = pibBilhoes1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_1 = pibBilhoes2; //armazenando valores da carta 2 para somar posteriormente
            break;
        
        case 4: //caso escolha a opcao 4 - comparar Numero de pontos turisticos entre cartas 1 e 2
            resultado1 = NumeroPontoTuristico1 > NumeroPontoTuristico2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo1, "Numero de Pontos Turisticos"); // variavel recebe o nome do atributo comparado
            soma11 = NumeroPontoTuristico1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_1 = NumeroPontoTuristico2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_1 = NumeroPontoTuristico1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_1 = NumeroPontoTuristico2; //armazenando valores da carta 2 para somar posteriormente
            break;
            
        case 5: //caso escolha a opcao 5 - comparar densidade populacional entre cartas 1 e 2
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo1, "Densidade Populacional"); // variavel recebe o nome do atributo comparado
            soma11 = densidadePopulacional1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_1 = densidadePopulacional2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_1 = densidadePopulacional1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_1 = densidadePopulacional2; //armazenando valores da carta 2 para somar posteriormente
            break;
            
        default:
            printf("Escolha uma opcao valida\n");
            break;
    }
    
    
    
    printf("\n\nEscolha o segundo atributo:\n");
    printf("Atencao: Voce deve escolher um atributo diferente do primeiro. \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    printf("Escolha a comparacao: ");
    scanf("%d", &atributo2);
    
    if (atributo1 == atributo2){
        printf("Atributo já escolhido! Faca outra escolha:");
    } else {
        
        switch(atributo2){
            
        case 1: //caso escolha a opcao 1 - comparar Populacao entre cartas 1 e 2
            resultado2 = populacao1 > populacao2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo2, "Populacao"); // variavel recebe o nome do atributo comparado
            soma21 = populacao1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_2 = populacao2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_2 = populacao1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_2 = populacao2; //armazenando valores da carta 2 para somar posteriormente
            break;
                
        case 2: //caso escolha a opcao 2 - comparar Area entre cartas 1 e 2
            resultado2 = area1 > area2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo2, "Area"); // variavel recebe o nome do atributo comparado
            soma21 = area1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_2 = area2;  //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_2 = area1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_2 = area2; //armazenando valores da carta 2 para somar posteriormente
            break;
            
        case 3: //caso escolha a opcao 3 - comparar PIB entre cartas 1 e 2
            resultado2 = pibBilhoes1 > pibBilhoes2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo2, "PIB"); // variavel recebe o nome do atributo comparado
            soma21 = pibBilhoes1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_2 = pibBilhoes2;  //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_2 = area1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_2 = area2; //armazenando valores da carta 2 para somar posteriormente
            break;
                
        case 4: //caso escolha a opcao 4 - comparar Numero de pontos turisticos entre cartas 1 e 2
            resultado2 = NumeroPontoTuristico1 > NumeroPontoTuristico2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo2, "Numero de Pontos Turisticos"); // variavel recebe o nome do atributo comparado
            soma21 = NumeroPontoTuristico1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_2 = NumeroPontoTuristico2; //armazenando valores para soma de cada carta de seus respectivos atributos
            valorCarta1_2 = NumeroPontoTuristico1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_2 = NumeroPontoTuristico2; //armazenando valores da carta 1 para somar posteriormente
            break;
            
        case 5: //caso escolha a opcao 5 - comparar densidade populacional entre cartas 1 e 2
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0; //comparacao entre cartas
            strcpy(nomeAtributo2, "Densidade Populacional"); // variavel recebe o nome do atributo comparado
            soma21 = densidadePopulacional1;//armazenando valores para soma de cada carta de seus respectivos atributos
            soma2_2 += densidadePopulacional2; //armazenando valores para soma de cada carta de seus respectivos atributos        
            valorCarta1_2 = densidadePopulacional1; //armazenando valores da carta 1 para somar posteriormente
            valorCarta2_2 = densidadePopulacional2; //armazenando valores da carta 1 para somar posteriormente
            break;
                
        default:
            printf("Escolha uma opcao valida\n");
            break;
                
        }
        
         if (resultado1 && resultado2){ //comparando a comparacao das cartas se valores sao veerdadeiros se sim executa o codigo abaixo
             
            printf("\n\nPais carta 1: %s, Pais carta 2: %s\n", nomePais1, nomePais2); //imprime nome dos Paises
            printf("Atributos Escolhidos: %s e %s\n", nomeAtributo1,nomeAtributo2); //imprime atributos escolhidos
            printf("Valores carta 1: %.2f e %.2f - Valores carta 2: %.2f e %.2f\n", valorCarta1_1, valorCarta1_2, valorCarta2_1, valorCarta2_2);//imprime valores de cada atributo de cada carta 
            printf("Soma dos atributos carta 1: %.2f - Soma dos atributos carta 2: %.2f\n", (soma11 + soma21), (soma2_1 + soma2_2));//soma dos valores de cada atributo de cada carta
            printf("Carta 1 venceu o jogo!\n");//imprimindoo carta vencedora
            
        } else if (resultado1 != resultado2){ //se resultado das comparacoes entre cartas for diferente resulta em empate
        
            printf("Empatou!\n");
            
        } else { //comprando a comparacao das cartas se valores forem falsos jogador perde e executa codigo abaixo
            
            printf("\n\nPais carta 1: %s, Pais carta 2 %s\n", nomePais1, nomePais2);//imprimindo nome dos Paises 
            printf("Atributos %s e %s\n", nomeAtributo1,nomeAtributo2); //imprime atributos escolhidos
            printf("Valores carta 1: %.2f e %.2f - Valores carta 2: %.2f e %.2f\n", valorCarta1_1, valorCarta1_2, valorCarta2_1, valorCarta2_2);//imprime valores de cada atributo de cada carta 
            printf("Soma dos atributos carta 1: %.2f - Soma dos atributos carta 2: %.2f\n", (soma11 + soma21), (soma2_1 + soma2_2));//soma dos valores de cada atributo de cada carta
            printf("Carta 2 venceu o jogo!\n");//imprime mensagem que jogador perdeu
            
        }
    }
    
    //fim do programa
    return 0;
    
}