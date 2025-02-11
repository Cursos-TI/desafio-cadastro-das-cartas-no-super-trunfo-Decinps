#include <stdio.h>

int main() {
    
    char nome[20];
    float populacao;
    float area;
    float PIB;
    int pt;

     printf ("Digite o código da cidade:\n ");
     scanf("%s", &nome);

     printf("Digite a populacao da cidade:\n");
     scanf("%f", &populacao);

     printf("Digite a aréa da cidade:\n");
     scanf("%f",&area);

     printf("Digite o PIB da cidade\n");
     scanf("%f", &PIB);

     printf("Digite quantos pontos turisticosde sua cidade\n");
     scanf("%d", &pt);

     printf("- Nome: %s\n - populacao: %f\n - Area: %f\n - PIB %f\n - Pontos turisticos: %d\n", nome, populacao, area, PIB, pt);

     
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
