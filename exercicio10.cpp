#include <iostream>

using namespace std;

int main() {
    // Declare um vetor de 5 inteiros
    int vetor[5];

    // Leia cinco valores do usuário
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    // Imprima cada valor na mesma ordem
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}