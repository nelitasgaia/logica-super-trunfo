#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pib_per_capita2;

    int atributo;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^
]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^
]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Escolha do atributo
    printf("\nDigite o número do atributo que deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &atributo);

    // Comparação
    printf("\nResultado: ");
    switch (atributo) {
        case 1:
            if (populacao1 > populacao2)
                printf("A carta 1 venceu com maior população!\n");
            else if (populacao2 > populacao1)
                printf("A carta 2 venceu com maior população!\n");
            else
                printf("Empate em população!\n");
            break;
        case 2:
            if (area1 > area2)
                printf("A carta 1 venceu com maior área!\n");
            else if (area2 > area1)
                printf("A carta 2 venceu com maior área!\n");
            else
                printf("Empate em área!\n");
            break;
        case 3:
            if (pib1 > pib2)
                printf("A carta 1 venceu com maior PIB!\n");
            else if (pib2 > pib1)
                printf("A carta 2 venceu com maior PIB!\n");
            else
                printf("Empate em PIB!\n");
            break;
        case 4:
            if (pontos1 > pontos2)
                printf("A carta 1 venceu com mais pontos turísticos!\n");
            else if (pontos2 > pontos1)
                printf("A carta 2 venceu com mais pontos turísticos!\n");
            else
                printf("Empate em pontos turísticos!\n");
            break;
        case 5:
            if (densidade1 > densidade2)
                printf("A carta 1 venceu com maior densidade populacional!\n");
            else if (densidade2 > densidade1)
                printf("A carta 2 venceu com maior densidade populacional!\n");
            else
                printf("Empate em densidade populacional!\n");
            break;
        case 6:
            if (pib_per_capita1 > pib_per_capita2)
                printf("A carta 1 venceu com maior PIB per capita!\n");
            else if (pib_per_capita2 > pib_per_capita1)
                printf("A carta 2 venceu com maior PIB per capita!\n");
            else
                printf("Empate em PIB per capita!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
