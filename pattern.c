#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of rows

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        // Newline after each row
        printf("\n");
    }

    return 0;
}