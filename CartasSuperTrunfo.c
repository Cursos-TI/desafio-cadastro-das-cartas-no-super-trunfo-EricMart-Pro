#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Aqui estão as variáveis da Carta 1
    char Estado01;
    char Codigo01 [4];
    char NomeCity01 [50];
    int População01;
    float Area01;
    float PIB01;
    int PontosTuristicos01;
//Aqui estão as variáveis da Carta 02
    char Estado02;
    char Codigo02 [4];
    char NomeCity02 [50];
    int População02;
    float Area02;
    float PIB02;
    int PontosTuristicos02;
    
    // Cadastro das Cartas:
     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Aqui eu utlizei printf e scanf para exibir solicitações e guarda-las nas variáveis.
    printf("Digite a letra do Estado da carta 1: "); //utilizei printf para enviar uma mensagem solicitando a letra do Estado.
    scanf(" %c", &Estado01);//utilizei scanf para guardar a informação na variável Estado01
    //utilizei printf e scanf para basicamente as mesmas finalidades abaixo.

    printf("Digite o código da carta 1: ");
    scanf("%3s", &Codigo01);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", &NomeCity01);

    printf("Digite o número de habitantes da carta 1: ");
    scanf("%d", &População01);

    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &Area01);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB01);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &PontosTuristicos01);

    printf("Digite a letra do Estado da carta 2: ");
    scanf(" %c", &Estado02);

    printf("Digite o código da carta 2: ");
    scanf("%3s", &Codigo02);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &NomeCity02);

    printf("Digite o número de habitantes da carta 2: ");
    scanf("%d", &População02);

    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &Area02);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB02);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &PontosTuristicos02);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 01 \n Estado: %c \n Código: %3s \n Nome da Cidade: %s \n Número da habitantes: %d \n Área: %f \n PIB: %f \n Pontos Turísticos: %d \n", Estado01, Codigo01, NomeCity01, População01, Area01, PIB01, PontosTuristicos01); //utilizei printf para imprimir/exibir na tela os dados que foram cadastrados.

    printf("Carta 02 \n Estado: %c \n Código: %3s \n Nome da Cidade: %s \n Número da habitantes: %d \n Área: %f \n PIB: %f \n Pontos Turísticos: %d \n", Estado02, Codigo02, NomeCity02, População02, Area02, PIB02, PontosTuristicos02);



    return 0;
}
