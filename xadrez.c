#include <stdio.h>

// Solicita a quantidade de casas
void casas(int *valor) {
    printf("\n--------------------- Quantidade de casas ------------------------------\n");
    do {
        printf("Escolha a quantidade de casas (1-10): ");
        scanf("%d", valor);
        if (*valor < 1 || *valor > 10) {
            printf("Opção inválida! Digite um número entre 1 e 10.\n");
        }
    } while (*valor < 1 || *valor > 10);
}

// Movimentação da torre
void torre(int n ) {
    if (n > 0) {
        printf("Direita\n");
        torre(n - 1);
    }
};

// Movimentação da rainhaS
void rainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        rainha(n - 1);
    }
};

// Movimentação do bispo
void bispo(int n) {
    for (int i = 0; i < n; i++) {
        // Movimento diagonal = um passo pra cima + um passo pra direita
        for (int j = 0; j < 1; j++) {
            printf("Cima e ");
        }
        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
    }
}

// Movimentação do cavalo
void cavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Cima\n");
        }

        for (int k = 0; k < 2; k++) {
            printf("Direita\n");
        }
    }
}



// Seleção de peças
void escolhaDePeca(int *peca) {
    printf("\n--------------------- Escolha de peças ------------------------------\n");
    printf("Peças disponíveis: \n");
    printf(
        "1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n");

    do {
        printf("Escolha uma peça para movimentar (1-4): ");
        scanf("%d", peca);
        if (*peca < 1 || *peca > 4) {
            printf("Opção inválida! Digite um número entre 1 e 4.\n");
        }
    } while (*peca < 1 || *peca > 4);
}


int main() {
    int pecaSelecionada;
    escolhaDePeca(&pecaSelecionada);

    int quantidadeDeCasas;

    // Menu de seleção de peças
    switch (pecaSelecionada) {
        case 1:
            printf("Peça escolhida: Torre\n");
            casas(&quantidadeDeCasas);
            printf("\n--------------------- Movimentação ------------------------------\n");
            torre(quantidadeDeCasas);
            break;
        case 2:
            printf("Peça escolhida: Bispo\n");
            casas(&quantidadeDeCasas);
            printf("\n--------------------- Movimentação ------------------------------\n");
            bispo(quantidadeDeCasas);
            break;
        case 3:
            printf("Peça escolhida: Rainha\n");
            casas(&quantidadeDeCasas);
            printf("\n--------------------- Movimentação ------------------------------\n");
            rainha(quantidadeDeCasas);
            break;
        case 4:
            printf("Peça escolhida: Cavalo\n");
            printf("\n--------------------- Movimentação ------------------------------\n");
            cavalo();
            break;
    }

    return 0;
}
