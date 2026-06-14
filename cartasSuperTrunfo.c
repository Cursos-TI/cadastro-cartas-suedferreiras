#include <stdio.h>

int main() {
    
    // definição das variáveis:
    // carta 1
    
    char estado[10];
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    int pontotur;
    float numero;
    float area;
    float pib;
    float demo1; //densidade demografica 1
    float pibcap1; // pib per capita 1
    float superpoder1;

    
    // carta 2

    char estado2[10];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    int pontotur2;
    float numero2;
    float area2;
    float pib2;
    float demo2; //densidade demografica 2
    float pibcap2; // pib per capita 2
    float superpoder2;



    // Área para definição das variáveis para armazenar as propriedades das cidades

    // introdução ao usuário sobre o jogo:
    printf("Olá,seja bem-vindo ao Super Trunfo de Paises!\nUm jogo para você se divertir com cartas.\nTeremos 3 Fases, e você se encontra agora na 1ª fase, a qual será cadastrar suas 2 cartas com as seguintes informações:\n");
    printf("Serão 8 perguntas para cada Carta :D\n");



    // começo da interação (entrada e saída de dados)
    // CARTA 1
    printf("Carta 1\n1) Escreva a sigla (ex. SP) do seu estado: ");
    scanf(" %s", estado);
    
    printf("2) Ok, você escolheu %s, agora escolha entre 01, 02, 03 ou 04: ", estado);
    scanf("%f", &numero); 
    
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


    
    // carta 2
    printf("Carta 2\n");
    printf("1) Escolha outra sigla (ex. RS) para o segundo estado: ");
    scanf("%s", estado2);
    
    printf("2) Escolha entre 01, 02, 03 ou 04, diferente da primeira carta: ");
    scanf(" %f", &numero2); 
    
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
    printf("CARTA 1:\n");
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


    /*int comp1 = populacao > populacao2;
    int comp2 = area > area2;
    int comp3 = pontotur > pontotur2;
    int comp4 = pib > pib2;
    int comp5 = pibcap1 > pibcap2;
    int comp6 = (1 / demo1) > (1 / demo2);
    int comp7 = superpoder1 > superpoder2;
    */

    int atributo;
    printf("*** Quem vence entre CArta 1 - 1 - e Carta 2 - 0 - ? ***\n");
    
    printf("Escolha um atributo para comparar entre as 2 cartas e ver qual ganha: \n");
    printf(" 1. nome do país\n 2. populaçao\n 3. pontos turísticos\n 4. área\n 5. PIB\n 6. densidade demográfica\n ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        printf(" %s e %s", cidade, cidade2);
        break;
    case 2:
        if(populacao > populacao2) {
            printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade);
        } else if(populacao == populacao2) {
            printf("Entre %s com a população %lu e %s com a população %lu, empatam\n", cidade, populacao, cidade2, populacao2);
        } else {
            printf("Entre %s com a população %lu e %s com a população %lu, a cidade %s ganha\n", cidade, populacao, cidade2, populacao2, cidade2);
        }
        break;
    case 3:
        if(pontotur > pontotur2) {
            printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade);
        } else if(pontotur == pontotur2) {
            printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , empatam\n", cidade, pontotur, cidade2, pontotur2);
        } else {
            printf("Entre %s com %d pontos turiticos e %s com o %d pontos turiticos , a cidade %s ganha\n", cidade, pontotur, cidade2, pontotur2, cidade2);
        }
        break;
    case 4:
        if(area > area2) {
            printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade);
        } else if(area == area2) {
            printf("Entre %s com área de %.0f km² e %s com área de %.0f km², empatam\n", cidade, area, cidade2, area2);
        } else {
            printf("Entre %s com área de %.0f km² e %s com área de %.0f km², a cidade %s ganha\n", cidade, area, cidade2, area2, cidade2);
        }
        break;
    case 5:
        if(pib > pib2) {
            printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais , a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade);
        } else if(pib == pib2) {
            printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, empatam\n", cidade, pib, cidade2, pib2);
        } else {
            printf("Entre %s com PIB de %.2f reais e %s com PIB de %.2f reais, a cidade %s ganha\n", cidade, pib, cidade2, pib2, cidade2);
        }
        break;
    case 6:
        if((1 / demo1) > (1 / demo2)) {
            printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade);
        } else if((1 / demo1) == (1 / demo2)) {
            printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, empatam\n", cidade, demo1, cidade2, demo2);
        } else {
            printf("Entre %s com %.2f de densidade demográfica e %s com o %.2f de densidade demográfica, a cidade %s ganha\n", cidade, demo1, cidade2, demo2, cidade2);
        }
        break;
    default:
        printf("erro, recomece");
        break;
    }
    
    
    /*printf("POPULAÇÃO: %d\n", comp1);

    printf("ÁREA: %d\n", comp2);
    printf("PONTOS TURÍSTICOS: %d\n", comp3);
    printf("PIB: %d\n", comp4);
    printf("PIB PER CAPITA: %d\n", comp5);
    printf("DENSIDADE DEMOGRÁFICA: %d\n", comp6);
    printf("SUPERPODER: %d\n", comp7);

    printf("Carta 1 - %s (%s): %.2f\n", cidade, estado, superpoder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superpoder2);
    */
    

    if( superpoder1 > superpoder2){
        printf("A Carta 1 (%s) ganhou pelo superpoder!\n", cidade);
    } else {
        printf("A Carta 2 (%s) ganhou pelo superpoder!\n", cidade2);
    }


    return 0;
}