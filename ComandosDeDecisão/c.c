#include <stdio.h>

int main() {
    char nome[] = "João";
    float nota = 7.5;
    
    if (nota >= 7) printf("Aprovado");
    else if (nota >= 5) printf("Recuperação");
    else printf("Reprovado");
    
    return 0;
}
