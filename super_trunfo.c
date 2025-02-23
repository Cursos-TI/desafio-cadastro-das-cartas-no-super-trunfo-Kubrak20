#include<stdio.h>

int main(){
    int populacao, pontos_turisicos;
    float pib, area;


    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite 0 PIB:\n");
    scanf("%f", &pib);
    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos  \n");
    scanf("%d", &pontos_turisicos); 
    
    printf("População do estado: %d\n Total de pontos turísticos: %d\n", populacao, pontos_turisicos);
    printf("PIB: %f\n Área: %f", pib, area);

    return 0;
}
