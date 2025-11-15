//Ques6
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        int decimal = 0, base = 1, rem;

        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        while (binary > 0) {
            rem = binary % 10;        // Extracting last digit
            decimal = decimal + rem * base;
            binary = binary / 10;
            base = base * 2;
        }

        printf("Decimal value: %d\n", decimal);
    }

    else if (choice == 2) {
        int decimal, i = 0;
        int binary[32];

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        if (decimal == 0) {
            printf("Binary value: 0\n");
        } else {
            while (decimal > 0) {
                binary[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
            }

            printf("Binary value: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid! Pls choose between the given choices");
    }

    return 0;
}
