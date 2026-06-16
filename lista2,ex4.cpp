#include <iostream>
using namespace std;

// Definição do procedimento com passagem por referência (&)
void trocar(int &a, int &b) {
    int temporario = a; // Guarda o valor de 'a' antes de apagá-lo
    a = b;              // 'a' recebe o valor de 'b'
    b = temporario;     // 'b' recebe o valor original de 'a' que estava guardado
}

int main() {
    int valor1 = 10;
    int valor2 = 20;
    
    cout << "Antes da troca -> valor1: " << valor1 << ", valor2: " << valor2 << endl;
    
    trocar(valor1, valor2); // Modifica valor1 e valor2 diretamente
    
    cout << "Depois da troca -> valor1: " << valor1 << ", valor2: " << valor2 << endl;
    return 0;
}