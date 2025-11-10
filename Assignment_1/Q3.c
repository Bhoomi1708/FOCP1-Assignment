//Ques3
#include<stdio.h>
int main()
{
    int a,b,c, neg;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    neg= ~b;
    c= neg+1+a;
    printf("subtraction of %d and %d is: %d ", a, b, c);
    return 0;
}
