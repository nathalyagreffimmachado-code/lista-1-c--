#include <iostream>
using namespace std;

// Definição da função
int maior(int a, int b) {
    if (a > b) {
        return a; // Se 'a' for maior, retorna 'a'
    } else {
        return b; // Caso contrário, retorna 'b'
    }
}

int main() {
    int x = 15;
    int y = 22;
    
    int resultado = maior(x, y);
    cout << "O maior numero e: " << resultado << endl;
    
    return 0;
}