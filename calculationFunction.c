#include <stdio.h>

int maxFunction(int num1, int num2);

int main(){
    int num1, num2;

    printf("Enter two numbers to find the largest.\n");
    
    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("The largest is: %d\n", maxFunction(num1, num2));

    return 0;
}

int maxFunction(int num1, int num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}