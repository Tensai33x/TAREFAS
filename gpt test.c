#include <stdio.h>

int main() {
    char buffer[5];
    printf("Digite algo: ");
    fgets(buffer, sizeof(buffer), stdin); // Lê até 99 caracteres ou até encontrar \n
    printf("Você digitou: %s", buffer);
    return 0;
}
