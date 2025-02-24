#include <stdio.h>
#include <string.h>

void BinaryToOctal(char binary[]) {
    int length = strlen(binary);
    int remainder = length % 3;
    int padding = 0;

    // Add leading zeros for padding if needed
    if (remainder != 0) {
        padding = 3 - remainder;
        for (int i = length - 1; i >= 0; i--) {
            binary[i + padding] = binary[i];
        }
        for (int i = 0; i < padding; i++) {
            binary[i] = '0';
        }
        binary[length + padding] = '\0';
        length += padding;
    }

    // Convert binary to octal
    int value = 0;
    for (int i = 0; i < length; i++) {
        value = value * 2 + (binary[i] - '0');
        if ((i + 1) % 3 == 0) {
            printf("%d", value);
            value = 0;
        }
    }
    printf("\n");
}

int main() {
    char binary[100];
    printf("Enter the Binary: ");
    scanf("%s", binary);

    // Validate input
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary input!\n");
            return 1;
        }
    }

    BinaryToOctal(binary);
    return 0;
}
