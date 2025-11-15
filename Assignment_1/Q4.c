//Ques4
#include <stdio.h>

int main() {
    int num_1, num_2, temp;
    int x, y;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    printf("\nOriginal values before swapping are numb_1 = %d and numb_2 = %d", num_1, num_2);
    
    //FIRST METHOD
     x = num_1;
    y = num_2;
    printf("\n\n ARITHMETIC METHOD");
    x = x + y;  
    y = x - y;  
    x = x - y;  
    printf("\nValues after swapping are x = %d and y = %d", x, y);

    //SECOND METHOD
    int *p1, *p2;
    x = num_1, y = num_2;  
    p1 = &x;
    p2 = &y;

    printf("\n\n POINTER MANIPULATION");
    printf("\n Original values before swapping are x = %d and y = %d", *p1, *p2);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("\nValues after swapping are x = %d, y = %d", *p1, *p2);

    //THIRD METHOD
    x = num_1;
    y = num_2;
    printf("\n\n TEMPORARY VARIABLES USAGE");
    temp = x;
    x = y;
    y = temp;
    printf("\nValues after swapping are x = %d and y = %d", x, y);

    return 0;
}
