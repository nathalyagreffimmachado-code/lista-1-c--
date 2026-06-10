#include <iostream>

using namespace std;

int main() {
    // Declare uma matriz 2x3 de inteiros (2 linhas e 3 colunas)
    int matriz[2][3];

    // Leia os valores para preencher a matriz
    for (int i = 0; i < 2; i++) {       // Percorre as linhas (0 e 1)
        for (int j = 0; j < 3; j++) {   // Percorre as colunas (0, 1 e 2)
            cin >> matriz[i][j];
        }
    }

    // Imprima a matriz em formato de tabela
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " "; // Imprime o número seguido de um espaço
        }
        cout << endl; // Quebra a linha ao terminar de imprimir uma linha inteira
    }

    return 0;
}