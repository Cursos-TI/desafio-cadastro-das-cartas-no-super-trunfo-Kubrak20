#include<stdio.h>

int main(){
    int populaçao, pontos_turisicos;
    float pib, area;


    printf("Digite a população: \n");
    scanf("%d", &populaçao);

    printf("Digite 0 PIB:\n");
    scanf("%f", &pib);
    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos  \n");
    scanf("%d", &pontos_turisicos); 
    
    printf("População do estado: %d\n Total de pontos turísticos: %d\n", populaçao, pontos_turisicos);
    printf("PIB: %f\n Área: %f", pib, area);

    return 0;

}
