#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a idade
    int idade;

    // Leitura da idade fornecida pelo usuário
    cin >> idade;

    // Estrutura condicional para verificar a maioridade
    if (idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }

    return 0;
}