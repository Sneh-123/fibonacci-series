#include <stdio.h>

int main() {
    int n;
    int t1 = 0, t2 = 1, nextTerm;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        
        // Calculate the next term by adding the previous two
        nextTerm = t1 + t2;
        
        // Update variables to shift the window forward
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
