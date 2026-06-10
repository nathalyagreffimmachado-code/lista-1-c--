#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a nota
    int nota;

    // Leitura da nota inteira (0 a 100)
    cin >> nota;

    // Estrutura condicional encadeada
    if (nota >= 90) {
        cout << "Excelente" << endl;
    } 
    else if (nota >= 70) { 
        // Como o 'if' anterior já testou se é >= 90, 
        // este 'else if' pega automaticamente quem está entre 70 e 89.
        cout << "Bom" << endl;
    } 
    else {
        // Se não for >= 90 e nem >= 70, com certeza é menor que 70.
        cout << "Precisa melhorar" << endl;
    }

    return 0;
}