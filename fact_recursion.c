#include <stdio.h>
// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %lld\n", n, factorial(n));

    return 0;
}
