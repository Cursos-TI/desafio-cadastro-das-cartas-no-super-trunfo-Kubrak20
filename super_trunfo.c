#include<stdio.h>

int main(){

    // Declaração das variáveis para a primeira carta
    unsigned long int populaçao1;
    int pontosturisicos1;
    float pib1, area1;
    char estado1[3];
    char nomedacidade1[20];
    char codigodacidade1[3];
    float densidadePopulacional1,pibPerCapita1; 
    float Super_poder1;


    // Leitura dos dados da primeira carta
    printf("\nCarta 1:\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado1); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade1);

    printf("Digite a população: \n");
    scanf("%d", &populaçao1);

    printf("Digite 0 PIB:\n");
    scanf("%f", &pib1);
    

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisicos1); 
    
    densidadePopulacional1 = populaçao1 / area1;
    pibPerCapita1 = pib1 / populaçao1;
    Super_poder1 = populaçao1 + area1 + pib1 +  pontosturisicos1 + pibPerCapita1 +-densidadePopulacional1;

    // Declaração das variáveis para a segunda carta
    unsigned long int populaçao2;
    int pontosturisicos2;
    float pib2, area2;
    char estado2[3];
    char nomedacidade2[20];
    char codigodacidade2[3];
    float densidadePopulacional2,pibPerCapita2;
    float Super_poder2;

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite a população: \n");
    scanf("%d", &populaçao2);

    printf("Digite 0 PIB:\n");
    scanf("%f", &pib2);
    

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontosturisicos2); 
    
    densidadePopulacional2 = populaçao2 / area2;
    pibPerCapita2 = pib2 / populaçao2;
    Super_poder2 = populaçao2 + area2 + pib2 +  pontosturisicos2 + pibPerCapita2 +-densidadePopulacional2;


    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Dencidade populacional:%f\n",densidadePopulacional1 );
    printf("PIB per Capita: %.2f\n\n", pibPerCapita1);
    printf("estado1: %s\n Nome da cidade: %s\n Código da cidade1: %s\n", estado1,nomedacidade1,codigodacidade1);
    printf("População do estado: %d\n Total de pontos turísticos1: %d\n", populaçao1, pontosturisicos1);
    printf("PIB1: %f\n Área: %f\n\n", pib1, area1);
    printf("Super Poder:%f\n\n",Super_poder1 );

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Dencidade populacional:%f\n",densidadePopulacional2 );
    printf("PIB per Capita: %.2f\n\n", pibPerCapita2);
    printf("estado: %s\n Nome da cidade: %s\n Código da cidade: %s\n", estado2,nomedacidade2,codigodacidade2);
    printf("População do estado: %d\n Total de pontos turísticos: %d\n", populaçao2, pontosturisicos2);
    printf("PIB: %f\n Área: %f\n\n", pib2, area2);
    printf("Super Poder:%f\n\n",Super_poder2 );

    //Declaração das variáveis para resultados  
    int resultado_pp;
    int resultado_ar;
    int resultado_pib;
    int resultado_pt;
    int resultado_dp;
    int resultado_ppc;
    int resultado_sp;

    //Comparando as cartas
    resultado_pp =populaçao1>populaçao2;
    resultado_ar =area1>area2;
    resultado_pib =pib1>pib2;
    resultado_pt = pontosturisicos1>pontosturisicos2;
    resultado_dp = densidadePopulacional1< densidadePopulacional2;
    resultado_ppc = pibPerCapita1>pibPerCapita2;
    resultado_sp = Super_poder1> Super_poder2;

   //Exibição dos dados dos resultados
   printf("\nComparação das cartas:\n");
   printf("Vencedor da populaçaõ:%d\n",resultado_pp);
   printf("Vencedor da área:%d\n", resultado_ar);
   printf("Vencedor do PIB:%d\n",resultado_pib);
   printf("Vencedor de pontos turisticos:%d\n",resultado_pt);
   printf("vencedor da Dencidade Populacional:%.1f\n",resultado_dp );
   printf("Vencedor PIB per Capita:%d\n", resultado_ppc);
   printf("Vencedor Super Poder:%d\n", resultado_sp);


   return 0;

}