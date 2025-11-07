//Ques9
#include<stdio.h>
int main()
{
    int k[5], i, j;
    printf("Enter the numbers: ");
    for(i=0; i<5; i++)
    scanf("%d", &k[i]);
    for(j= 0; j<5; j++)
    {
        if(k[j]== 99)
        printf("the first occurence of 99 is at j= %d", j+1);
    }
    return 0;
}
