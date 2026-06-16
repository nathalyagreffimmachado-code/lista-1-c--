#include <iostream>
using namespace std;

// Função que calcula e retorna a área
float calcularArea(float base, float altura) {
    return base * altura;
}

int main() {
    float base, altura;
    
    cout << "Digite a base do retangulo: ";
    cin >> base;
    
    cout << "Digite a altura do retangulo: ";
    cin >> altura;
    
    // Chamada da função passando os dados lidos
    float area = calcularArea(base, altura);
    
    cout << "A area do retangulo e: " << area << endl;
    
    return 0;
}