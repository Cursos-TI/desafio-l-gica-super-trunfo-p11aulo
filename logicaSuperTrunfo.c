#include <stdio.h>

int main() {
    int codigocidade;
    char nomedacidadeA[50];
    char nomedacidadeB[50];
    float pibcidade;
    int populacaoA = 1000;
    int populacaoB = 900;

    printf("Digite o código da cidade: ");
    scanf("%d", &codigocidade);

    printf("Nome da cidade A: ");
    scanf("%49s", nomedacidadeA);

    printf("Digite o nome de outra cidade (B): ");
    scanf("%49s", nomedacidadeB);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibcidade);

    char *cidadeVencedora;

    if (populacaoA > populacaoB) {
        printf("CIDADE A TEM A MAIOR POPULAÇÃO\n");
        cidadeVencedora = nomedacidadeA;
    } else if (populacaoA < populacaoB) {
        printf("CIDADE B TEM A MAIOR POPULAÇÃO\n");
        cidadeVencedora = nomedacidadeB;
    } else {
        printf("CIDADES A E B TEM POPULAÇÃO IGUAL\n");
    }

    if (cidadeVencedora != NULL) {
        printf("A cidade vencedora é: %s\n", cidadeVencedora);
    }

    return 0;
}
















   


