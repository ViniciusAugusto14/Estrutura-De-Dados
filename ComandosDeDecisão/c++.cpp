#include <iostream>
using namespace std;

int main() {
    string nome = "João";
    float nota = 7.5;
    
    if (nota >= 7) cout << "Aprovado";
    else if (nota >= 5) cout << "Recuperação";
    else cout << "Reprovado";
    
    return 0;
}