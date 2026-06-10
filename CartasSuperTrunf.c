#include <stdio.h>

int main() {
    
    // definição das variáveis:
    // carta 1
    
    char estado;
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

    char estado2;
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
    printf("Carta 1\n1) Escolha uma letra de A até H para ser o Estado: ");
    scanf(" %c", &estado);
    
    printf("2) Ok, você escolheu %c, agora escolha entre 01, 02, 03 ou 04: ", estado);
    scanf("%f", &numero); 
    
    printf(" Obgd, esse será seu 1º código: %c0%0.f\n", estado, numero);
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
    printf("1) Escolha uma letra de A até H para ser o Estado, diferente da primeira: ");
    scanf(" %c", &estado2);
    
    printf("2) Escolha entre 01, 02, 03 ou 04, diferente da primeira carta: ");
    scanf(" %f", &numero2); 
    
    printf(" Seu 2º código: %c0%0.f\n", estado2, numero2);
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
    printf("ESTADO: %c\n", estado);
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
    printf("ESTADO: %c\n", estado2);
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


    int comp1 = populacao > populacao2;
    int comp2 = area > area2;
    int comp3 = pontotur > pontotur2;
    int comp4 = pib > pib2;
    int comp5 = pibcap1 > pibcap2;
    int comp6 = (1 / demo1) > (1 / demo2);
    int comp7 = superpoder1 > superpoder2;


    printf("*** Quem vence entre CArta 1 - 1 - e Carta 2 - 0 - ? ***\n");
    printf("POPULAÇÃO: %d\n", comp1);
    printf("ÁREA: %d\n", comp2);
    printf("PONTOS TURÍSTICOS: %d\n", comp3);
    printf("PIB: %d\n", comp4);
    printf("PIB PER CAPITA: %d\n", comp5);
    printf("DENSIDADE DEMOGRÁFICA: %d\n", comp6);
    printf("SUPERPODER: %d\n", comp7);


    
    return 0;
}