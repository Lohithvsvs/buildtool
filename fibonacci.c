#include <stdio.h>

void fibonacci(int n) {
    int term1 = 0, term2 = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    if (numTerms <= 0) {
        printf("Number of terms should be positive.\n");
    } else {
        fibonacci(numTerms);
    }

    return 0;
}
