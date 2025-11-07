//Ques1
#include<stdio.h>
#include<math.h>

int main() {
    int num, rem, count = 0;
    double arm = 0;  // can use double for safety with pow()
    
    printf("\nEnter number to be checked for Armstrong Number: ");
    scanf("%d", &num);

    int copy = num;  // store original number

    // Step 1: Count digits
    int temp = num;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Step 2: Calculate Armstrong sum
    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        arm = arm + ceil(pow(rem, count));  // using ceil to avoid float rounding issue
        temp = temp / 10;
    }

    // Step 3: Compare and print
    if ((int)arm == copy)
        printf("\nIt's an Armstrong Number.\n");
    else
        printf("\nIt's not an Armstrong Number.\n");

    return 0;
}
