#include <stdio.h>

int main() {
    char buffer[5];
    printf("Digite algo: ");
    fgets(buffer, sizeof(buffer), stdin); // L� at� 99 caracteres ou at� encontrar \n
    printf("Voc� digitou: %s", buffer);
    return 0;
}
