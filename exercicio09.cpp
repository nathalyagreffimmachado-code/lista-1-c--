#include <iostream>

using namespace std;

int main() {
    int numero;

    // O bloco 'do' garante que o programa peça o número pelo menos a primeira vez
    do {
        cin >> numero;
    } while (numero < 0); // Repete o processo ENQUANTO o número digitado for negativo

    // Ao sair do laço, significa que o número digitado é maior ou igual a zero
    cout << "Número válido: " << numero << endl;

    return 0;
}