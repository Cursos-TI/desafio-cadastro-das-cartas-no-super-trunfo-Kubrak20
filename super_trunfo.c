#include<stdio.h>

int main(){
    int populaçao, pontos_turisicos;
    float pib, area;
    char estado[3];
    char nome_da_cidade[20];
    char codigo_da_cidade[3];

    printf("Digite o estado: \n");
    scanf("%s", &estado); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populaçao);

    printf("Digite 0 PIB:\n");
    scanf("%f", &pib);
    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos  \n");
    scanf("%d", &pontos_turisicos); 
    
    printf("estado: %s\n Nome da cidade: %s\n Código da cidade: %s\n", estado,nome_da_cidade,codigo_da_cidade);
    printf("População do estado: %d\n Total de pontos turísticos: %d\n", populaçao, pontos_turisicos);
    printf("PIB: %f\n Área: %f", pib, area);

    return 0;

}
