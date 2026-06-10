#include <iostream>

using namespace std;

int main() {
    // Declare um vetor de 5 inteiros e uma variável para acumular a soma
    int vetor[5];
    int soma = 0;

    // Leia os valores e calcule a soma
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
        soma += vetor[i]; // Adiciona o valor digitado diretamente na soma
    }

    // Imprima o resultado no formato solicitado
    cout << "Soma do vetor: " << soma << endl;

    return 0;
}