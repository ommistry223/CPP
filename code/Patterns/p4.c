#include <stdio.h>

int calculate_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculate_lcm(int a, int b) {
    int gcd = calculate_gcd(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }
    
    int lcm = calculate_lcm(num1, num2);
    
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}