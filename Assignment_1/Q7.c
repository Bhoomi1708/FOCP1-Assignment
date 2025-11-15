//Ques7
#include <stdio.h>
int main() {
    int i, j, num;
    int spaces = 12;  

    for (i = 1; i <= 5; i++) {
        num = 0;
        for (j = 1; j <= i; j++) 
        {
            printf("%d", num);
            num = 1 - num;
        }

        for (j = 1; j <= spaces; j++) 
        {
            printf(" ");
        }

        num = 0;

        for (j = 1; j <= i; j++) 
        {
            printf("%d", num);
            num = 1 - num;
        }

        printf("\n");
        spaces -= 4;  
    }
    return 0;
}
