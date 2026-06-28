#include <stdio.h>

int main() {
    
    // definição das variáveis:
    // 1 para carta 1. 2 para carta 2.
    char estado[10], estado2[10], codigo[10], codigo2[10], cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    int pontotur, pontotur2;
    float numero, area, pib, demo1, pibcap1, superpoder1;
    float numero2, area2, pib2, demo2, pibcap2, superpoder2;
    // pontotur: pontos turísticos
    // numero: o numero que a pessoa deseja por no código da carta
    // demo: densidade demografica 
    // pibcap: pib per capita 


    // introdução ao usuário sobre o jogo:
    printf("Olá, seja bem-vindo ao Super Trunfo de Paises!\nUm jogo para você se divertir com cartas.\n\nTeremos 3 Fases:\n");
    printf("Fase 1 - escrever as características dos atributos das duas cartas;\n");
    printf("Fase 2 - escolher a comparação entre atributos da carta 1 e carta 2;\n");
    printf("Fase 3 - expor o ganhador;\n");
    
    
    // FASE 1
    printf("\nFASE 1\n");
    printf("Serão 8 perguntas para cada Carta :D\n");

    
    // começo da interação (entrada e saída de dados)
    // CARTA 1
    printf("\nCarta 1\n1) Escreva a sigla (ex. SP) do seu estado: ");
    scanf(" %s", estado);
    

    do {
        printf("2) Ok, você escolheu %s, agora escolha entre 1, 2, 3 ou 4: ", estado);
        scanf("%f", &numero);

        // strcmp retorna 0 quando as duas strings são exatamente iguais
    } while (numero < 1 || numero > 4);

    printf(" Obgd, esse será seu 1º código: %s0%0.f\n", estado, numero);
    printf("3) Digite o código mostrado: ");
    scanf(" %s", codigo);

    printf("4) Me diga qual o nome (não pode ser composto!) da sua primeira cidade: ");
    scanf("%s", cidade);

    printf("5) Qual o número de habitantes terá %s?: ", cidade );
    scanf("%lu", &populacao);

    printf("6) %lu hab. por quantos km²?: ", populacao);
    scanf("%f", &area);

    printf("7) Está quase acabando! Diga qual sera o Produto Interno Bruto (PIB), da sua cidade %s: ", cidade);
    scanf("%f", &pib);

    printf("8) Número de pontos turisticos: ");
    scanf("%d", &pontotur);

    
    //carta 2
    printf("\nCarta 2\n");


    printf("1) Escolha outra sigla (ex. RS) para o segundo estado: ");
    scanf("%s", estado2);


    do {
        printf("2) Ok, você escolheu %s, agora escolha entre 1, 2, 3 ou 4: ", estado2);
        scanf("%f", &numero2);

        // strcmp retorna 0 quando as duas strings são exatamente iguais
    } while (numero2 < 1 || numero2 > 4);
    
    printf(" Seu 2º código: %s0%0.f\n", estado2, numero2);
    printf("3) Digite o código mostrado: ");
    scanf(" %s", codigo2);

    printf("4) Me diga qual o nome (não pode ser composto!) da sua segunda cidade: ");
    scanf("%s", cidade2);

    printf("5) Número de habitantes de %s: ", cidade2 );
    scanf("%lu", &populacao2);

    printf("6) %lu hab. por quantos km²?: ", populacao2);
    scanf("%f", &area2);

    printf("7) Produto Interno Bruto (PIB), da sua 2ª cidade, %s: ", cidade2);
    scanf("%f", &pib2);

    printf("8) Número de pontos turisticos: ");
    scanf("%d", &pontotur2);
    
    // Área para exibição dos dados da cidade
    printf("Essas são suas Cartas:\n");

    //carta1
    printf("\nCARTA 1:\n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %lu habitantes\n", populacao);
    printf("ÁREA: %0.f Km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("PONTOS TURÍSTICOS: %d locais\n", pontotur);  
    
    demo1 = (float)populacao / area;
    printf("DENSIDADE DEMOGRÁFICA: %.2f hab/Km²\n", demo1);

    pibcap1 = pib / populacao;
    printf("PIB PER CAPITA: %.2f reais\n", pibcap1);

    superpoder1 = populacao + pontotur + area + pib + ( 1 / demo1) + pibcap1;
    printf("SUPERPODER: %.2f\n", superpoder1);

    
    //carta2
    printf("\nCARTA 2:\n");
    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu habitantes\n", populacao2);
    printf("ÁREA: %0.f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("PONTOS TURÍSTICOS: %d locais\n", pontotur2);
    
    demo2 = (float)populacao2 / area2;
    printf("DENSIDADE DEMOGRÁFICA: %.2f hab/Km²\n", demo2);
    
    pibcap2 = pib2 / (float)populacao2;
    printf("PIB PER CAPITA: %.2f reais\n", pibcap2);

    superpoder2 = populacao2 + pontotur2 + area2 + pib2 + ( 1 / demo2) + pibcap2;
    printf("SUPERPODER: %.2f\n", superpoder2);

    //comparação entre cartas:
    /* NIVEL MESTRE 1º TEMA
    int comp1 = populacao > populacao2;
    int comp2 = area > area2;
    int comp3 = pontotur > pontotur2;
    int comp4 = pib > pib2;
    int comp5 = pibcap1 > pibcap2;
    int comp6 = (1 / demo1) > (1 / demo2);
    int comp7 = superpoder1 > superpoder2;
    printf("\nPOPULAÇÃO: %d\n", comp1);
    printf("ÁREA: %d\n", comp2);
    printf("PONTOS TURÍSTICOS: %d\n", comp3);
    printf("PIB: %d\n", comp4);
    printf("PIB PER CAPITA: %d\n", comp5);
    printf("DENSIDADE DEMOGRÁFICA: %d\n", comp6);
    printf("SUPERPODER: %d\n", comp7);
    printf("\nCarta 1 - %s (%s): %.2f\n", cidade, estado, superpoder1);
    */
    
    
    // NÍVEL MESTRE 2º TEMA :P
    // TEMA 2:
    char atributo, atributo2;
    printf("\n*** Quem vence entre Carta 1 e Carta 2? ***\n\nFASE 2\n ");
    printf("\nNessa fase vocẽ irá comparar 2 vezes, ambas as cartas, escolhendo atributos.\n");
    
    printf("Digite a letra de um atributo para a primeira comparação entre as 2 cartas e ver qual valor ganha: \n");
    printf(" A. ÁREA\n B. PIB\n C. PIB per CAPTA\n D. DENSIDADE DEMOGRÁFICA \n P. POPULAÇÃO \n T. PONTOS TURÍSTICOS\n ");
    scanf(" %c", &atributo);

    switch (atributo){
        case 'A':
        case 'a':
            atributo = area > area2 ? 1 : 0;    
            if(area == area2){
                printf("Entre %s com área de %.0f km² e %s com área de %.0f km², empatam\n", cidade, area, cidade2, area2);
            } else if(atributo == 1) {
                printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade);
            } else {
                printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade2);
            }
            break;
        case 'B':
        case 'b':
            atributo = pib > pib2 ? 1 : 0;
            if( atributo == 1) {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais , a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade);
            //} else if(pib == pib2) {
                //printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, empatam\n", cidade, pib, cidade2, pib2);
            } else {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade2);
            }
            break;
        case 'C':
        case 'c':
            atributo = pibcap1 > pibcap2 ? 1 : 0;
            if(atributo == 1) {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais , a cidade %s ganha\n", cidade, pibcap1, cidade2, pibcap2, cidade);
            //} else if(pibcap1 == pibcap2) {
                //printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, empatam\n", cidade, pibcap1, cidade2, pibcap2);
            } else {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, a cidade %s ganha\n", cidade, pibcap1, cidade2, pibcap2, cidade2);
            }
            break;
        case 'D':
        case 'd':
            atributo = (1 / demo1) > (1 / demo2) ? 1 : 0;
            if(atributo == 1) {
                printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade);
            //} else if((1 / demo1) == (1 / demo2)) {
                //printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, empatam\n", cidade, demo1, cidade2, demo2);
            } else {
                printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade2);
            }
            break;
        case 'P':
        case 'p':
            atributo = populacao > populacao2 ? 1 : 0;
            if(atributo == 1) {
                printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade);
            //} else if(populacao == populacao2) {
                //printf("Entre %s com a população %lu e %s com a população %lu, empatam\n", cidade, populacao, cidade2, populacao2);
            } else {
                printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade2);
            }
            break;
        case 'T':
        case 't':
            atributo = pontotur > pontotur2 ? 1 : 0;
            if(atributo == 1) {
                printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade);
            //} else if(pontotur == pontotur2) {
                //printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , empatam\n", cidade, pontotur, cidade2, pontotur2);
            } else {
                printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade2);
            }
            break;
        default:
            printf("erro, recomece");
            break;
        }

    printf("escolha o segundo atributo para a segunda comparação:\n");
    scanf(" %c", &atributo2);

    if (atributo == atributo2 ){
        printf("voce escolheu o mesmo atributo. \n");
    } else {
        switch (atributo2){
        case 'A':
        case 'a':
            atributo2 = area > area2 ? 1 : 0;
            if(atributo2 == 1) {
                printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade);
            //} else if(area == area2) {
              //  printf("Entre %s com área de %.0f km² e %s com área de %.0f km², empatam\n", cidade, area, cidade2, area2);
            } else {
                printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade2);
            }
            break;
        case 'B':
        case 'b':
            atributo2 = pib > pib2 ? 1 : 0;
            if( atributo2 == 1) {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais , a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade);
            //} else if(pib == pib2) {
              //  printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, empatam\n", cidade, pib, cidade2, pib2);
            } else {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade2);
            }
            break;
        case 'C':
        case 'c':
            atributo2 = pibcap1 > pibcap2 ? 1 : 0;
            if(atributo2 == 1) {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais , a cidade %s ganha\n", cidade, pibcap1, cidade2, pibcap2, cidade);
            //} else if(pibcap1 == pibcap2) {
              //  printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, empatam\n", cidade, pibcap1, cidade2, pibcap2);
            } else {
                printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, a cidade %s ganha\n", cidade, pibcap1, cidade2, pibcap2, cidade2);
            }
            break;
        case 'D':
        case 'd':
            atributo2 = (1 / demo1) > (1 / demo2) ? 1 : 0;
            if(atributo2 == 1) {
                printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade);
            //} else if((1 / demo1) == (1 / demo2)) {
              //  printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, empatam\n", cidade, demo1, cidade2, demo2);
            } else {
                printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade2);
            }
            break;
        case 'P':
        case 'p':
            atributo2 = populacao > populacao2 ? 1 : 0;
            if(atributo2 == 1) {
                printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade);
            //} else if(populacao == populacao2) {
            //    printf("Entre %s com a população %lu e %s com a população %lu, empatam\n", cidade, populacao, cidade2, populacao2);
            } else {
                printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade2);
            }
            break;
        case 'T':
        case 't':
            atributo2 = pontotur > pontotur2 ? 1 : 0;
            if(atributo2 == 1) {
                printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade);
            //} else if(pontotur == pontotur2) {
            //    printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , empatam\n", cidade, pontotur, cidade2, pontotur2);
            } else {
                printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade2);
            }
            break;
        default:
            printf("erro, recomece");
            break;
        }
    }
    

    // FASE 3:
    printf("\n****EAE, QUEM GANHOU??****\n");
    printf("\nFASE 3 - FINAL -\n");
    printf("\nCom base nos atributos que vocễ escolheu, veremos se vocẽ obteve pontuação nos dois ou não!\n");


    if (atributo && atributo2)
    {
        printf("Você ganhou :)\n");
    } else if (atributo != atributo2) 
    {
        printf("Empatou :/\n");
    } else {
        printf("Você perdeu :(\n)");
    }
    

    if( superpoder1 > superpoder2){
        printf("A Carta 1 (%s) ganhou pelo superpoder (%.2f)!\n", cidade, superpoder1);
    } else {
        printf("A Carta 2 (%s) ganhou pelo superpoder (%.2f)!\n", cidade2, superpoder2);
    }

    printf("\nOBRIGADA POR JOGAR\n");


    return 0;
}