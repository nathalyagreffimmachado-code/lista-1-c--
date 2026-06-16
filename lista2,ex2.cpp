#include <iostream>
using namespace std;

// Definição do procedimento
void imprimirLinha() {
    for (int i = 0; i < 30; i++) {
        cout << "-";
    }
    cout << endl; // Quebra de linha no final
}

int main() {
    cout << "Texto acima da linha" << endl;
    
    imprimirLinha(); // Chamada do procedimento
    
    cout << "Texto abaixo da linha" << endl;
    return 0;
}