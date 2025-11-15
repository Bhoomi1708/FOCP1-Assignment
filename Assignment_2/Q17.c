//Ques17
#include <stdio.h>
int main() 
{
    int arr[100], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    
    printf("\n\nChoose deletion position:\n");
    printf("1. Front\n");
    printf("2. Middle\n");
    printf("3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &pos);

    if (pos == 1) 
    {
        
        for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
        
        n--;
    } 
    else if (pos == 2) 
    {
        
        int mid = n / 2;
        for (int i = mid; i < n - 1; i++)
        arr[i] = arr[i + 1];
        
        n--;
    } 
    else if (pos == 3) 
    n--;
    
    else 
    {
        printf("\nInvalid choice!\n");
        return 0;
    }

    printf("\nArray After Deletion: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    
    return 0;
}
