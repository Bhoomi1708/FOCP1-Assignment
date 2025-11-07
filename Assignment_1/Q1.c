//Ques1
#include<stdio.h>
#include<math.h>

int main() {
    int num, rem, count = 0;
    double arm = 0;  // can use double for safety with pow()
    
    printf("\nEnter the number : ");
    scanf("%d", &num);

    int copy = num;  
    int temp = num;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        arm = arm + ceil(pow(rem, count));  
        temp = temp / 10;
    }

    if ((int)arm == copy)
        printf("\nIt is an Armstrong Number.\n");
    else
        printf("\nIt is not an Armstrong Number.\n");

    return 0;
}
