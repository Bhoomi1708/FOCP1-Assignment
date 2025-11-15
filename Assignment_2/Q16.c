//Ques16
#include <stdio.h>
int main() {
    int arr[100], n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

    printf("\n\nEnter value to insert: ");
    scanf("%d", &value);

    printf("\nChoose insertion position:\n");
    printf("1. Front\n");
    printf("2. Middle\n");
    printf("3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &pos);
    if (pos == 1) 
    {
        for (int i = n; i > 0; i--) 
        arr[i] = arr[i - 1];

        arr[0] = value;
        n++; 
    } 
    else if (pos == 2) 
    {
        int mid = n / 2;
        for (int i = n; i > mid; i--) 
        arr[i] = arr[i - 1];
        
        arr[mid] = value;
        n++;
    } 
    else if (pos == 3) 
    {
        arr[n] = value;
        n++;
    } 
    else 
    {
        printf("\nInvalid choice!\n");
        return 0;
    }
    printf("\nArray After Insertion: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

    return 0;
}
