//Ques14
#include <stdio.h>
int main()
{
    int n, i, j, count = 0, Prime;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < 2) {
            continue; 
        }

        Prime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                Prime = 0; 
                break;
            }
        }

        if (Prime) {
            count++;
        }
    }

    printf("Total prime numbers in array: %d\n", count);

    return 0;
}
