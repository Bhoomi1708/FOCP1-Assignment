//Ques10
#include<stdio.h>
int main()
{
    int m[10], i, j, count= 0;
    printf("Enter the numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &m[i]);
    }
    for(j=0; j<10; j++)
    {
    if(m[j]== 99)
    count++;
    }
    printf("count= %d", count);

    return 0;
}
