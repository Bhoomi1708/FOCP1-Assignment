//Ques18
#include <stdio.h>
int main() 
{
    int arr[100];
    int n, i, j;
    int printed[100] = {0};

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    scanf("%d", &arr[i]);

    int found = 0;

    for (i = 0; i < n; i++) 
    {
        if (printed[i] == 1)
            continue;
            int count = 1;

        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                printed[j] = 1; 
            }
        }

        if (count > 1) 
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}
