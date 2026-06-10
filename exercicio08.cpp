#include <iostream>

using namespace std;

int main() {
    // Laço 'for' indo de 0 até 10 (inclusive, usando <=)
    for (int i = 0; i <= 10; i++) {
        
        // Verifica se o número é par
        // O operador '%' pega o resto da divisão. Se for 0, o número é par.
        if (i % 2 == 0) {
            continue; // Pula o restante do bloco e vai para a próxima repetição
        }
        
        // Esta linha só será executada se o número for ímpar
        cout << i << endl;
    }

    return 0;
}