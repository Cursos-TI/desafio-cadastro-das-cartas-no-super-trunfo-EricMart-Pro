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
    int Populacao01;
    float Area01;
    float PIB01;
    int PontosTuristicos01;
    float DensidadePopulacional01; //Essa é a variavél do tipo float onde será armazenado um valor decimal referente à Densidade Populacional da carta 1
    float PIBperCapita01;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente ao PIB per Capita da Carta 1

//Aqui estão as variáveis da Carta 02
    char Estado02;
    char Codigo02 [4];
    char NomeCity02 [50];
    int Populacao02;
    float Area02;
    float PIB02;
    int PontosTuristicos02;
    float DensidadePopulacional02;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente à Densidade Populacional da carta 2
    float PIBperCapita02;//Essa é a variavél do tipo float onde será armazenado um valor decimal referente ao PIB per Capita da Carta 2

    // Cadastro das Cartas:
     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Aqui eu utlizei printf e scanf para exibir solicitações e guarda-las nas variáveis.
    printf("Digite a letra do Estado da carta 1: "); //utilizei printf para enviar uma mensagem solicitando a letra do Estado.
    scanf(" %c", &Estado01);//utilizei scanf para guardar a informação na variável Estado01
    //utilizei printf e scanf para basicamente as mesmas finalidades abaixo.

    printf("Digite o código da carta 1: ");
    scanf("%s", &Codigo01);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", &NomeCity01);

    printf("Digite o número de habitantes da carta 1: ");
    scanf("%d", &Populacao01);

    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &Area01);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB01);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &PontosTuristicos01);

    DensidadePopulacional01 = (float) Populacao01 / Area01;//Aqui eu usei casting para transformar os dados da população e da área em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél densidade da carta 1
    PIBperCapita01 = (float) PIB01 / Populacao01;//Usei o casting para transformar os dados da população e do PIB em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél PIBperCapita da carta 1


    printf("Digite a letra do Estado da carta 2: ");
    scanf(" %c", &Estado02);

    printf("Digite o código da carta 2: ");
    scanf("%s", &Codigo02);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &NomeCity02);

    printf("Digite o número de habitantes da carta 2: ");
    scanf("%d", &Populacao02);

    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &Area02);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB02);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &PontosTuristicos02);

    DensidadePopulacional02 = (float) Populacao02 / Area02;//Aqui eu usei casting para transformar os dados da população e da área em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél densidade da carta 2
    PIBperCapita02 = (float) PIB02 / Populacao02;//Usei o casting para transformar os dados da população e do PIB em dados decimais antes da divisão e o resultado da divisão vai ser atribuido à variavél PIBperCapita da carta 2


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 01 \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n Número da habitantes: %d \n Área: %.2f km²\n PIB: %.2f \n Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", Estado01, Codigo01, NomeCity01, Populacao01, Area01, PIB01, PontosTuristicos01, DensidadePopulacional01, PIBperCapita01); //utilizei printf para imprimir/exibir na tela os dados que foram cadastrados.

    printf("Carta 02 \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n Número da habitantes: %d \n Área: %.2f km² \n PIB: %.2f \n Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", Estado02, Codigo02, NomeCity02, Populacao02, Area02, PIB02, PontosTuristicos02, DensidadePopulacional02, PIBperCapita02);



    return 0;
}
