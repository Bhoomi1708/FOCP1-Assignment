//Ques2
#include<stdio.h>
int main()
{
    int a, b, n, i, HCF;
    printf("Enter the numbers a and b: ");
    scanf("%d %d", &a, &b);
    if(n<a)
    n=b;
    else
    n=a;
    for(i=1; i<=n; i++)
    {
        if(a% i==0 && b% i==0)
        HCF= i;
    }
    printf("The HCF of a=%d and b=%d is %d", a, b, HCF);
    return 0;

}
