//Ques12
#include<stdio.h>
int main()
{
    int n, i, j, scores[100], max_score= 0, min_score= scores[0];
    printf("Enter the number of scores: ");
    scanf("%d", &n);
    printf("Enter the scores: ");
    for(i=0; i<n; i++)
    scanf("%d", &scores[i]);
    for(j= 0; j<n; j++)
    {
        if(max_score < scores[j])
        max_score= scores[j];
        if(min_score > scores[j])
        min_score= scores[j];
    }
    printf("max score= %d", max_score);
    printf("\nmin score= %d", min_score);
    return 0;
}
