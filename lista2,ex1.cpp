#include <iostream>
using namespace std;

// Definição da função
float media(float a, float b, float c) {
    return (a + b + c) / 3.0; // Soma as três notas e divide por 3
}

int main() {
    float n1 = 7.0, n2 = 8.5, n3 = 9.0;
    
    // Chamada da função dentro do cout
    cout << "A media e: " << media(n1, n2, n3) << endl;
    
    return 0;
}