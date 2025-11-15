//Ques11
#include <stdio.h>
int main()
{
    int score_arr[100], even_arr[100], odd_arr[100];
    int n, i, e = 0, o = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("\nEnter the scores:" );
    for (i = 0; i < n; i++) 
    scanf("%d", &score_arr[i]);

    for (i = 0; i < n; i++) {
        if (score_arr[i] % 2 == 1)
        {
            odd_arr[o] = score_arr[i];
            o++;         
        }
        else 
        {  
            even_arr[e] = score_arr[i];
            e++;                        
        }
    }

    printf("\neven_array: ");
    if (e == 0)
        printf("NO SCORES");
    else
        for (i = 0; i < e; i++)
            printf("%d ", even_arr[i]);

    printf("\nOdd_array: ");
    if (o == 0)
        printf("NO SCORES");
    else
        for (i = 0; i < o; i++)
            printf("%d ", odd_arr[i]);

    printf("\n");

    return 0;
}
