#include <stdio.h>

int custom_strlen(const char *str) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }
    
    int length = custom_strlen(input);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}