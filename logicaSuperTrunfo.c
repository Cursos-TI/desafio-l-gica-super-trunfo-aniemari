#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

#include <stdio.h>

int main() {
    // Carta 1
    char estado[30] = "Amazonas";
    char codigodacarta[30] = "A92";
    char nomedacidade[30] = "Manaus";
    float pib = 250000000;
    int populacao = 540000000;
    float area = 125000000;
    int numpontosturisticos = 26;
    float densidadedapopulacao = (float)populacao / area;
    float pibpercapita = pib / (float)populacao;

    // Carta 2
    char Estado2[30] = "Distrito Federal";
    char codigodacarta2[30] = "B85";
    char nomedacidade2[30] = "Brasilia";
    float pib2 = 1700000000;
    int populacao2 = 300000000;
    float area2 = 580000000;
    int numpontosturisticos2 = 15;
    float densidadedapopulacao2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / (float)populacao2;

    // Comparação do PIB
    if (pib > pib2) {
        printf("O estado de %s tem o maior PIB\n", estado);
    } else {
        printf("O estado de %s tem o maior PIB\n", Estado2);
    }

    // Comparação da população
    if (populacao > populacao2) {
        printf("O estado de %s tem a maior população\n", estado);
    } else {
        printf("O estado de %s tem a maior população\n", Estado2);
        
    }

    return 0;

}
    




