#include <stdio.h>

int main(){
    int number;
    int factorial = 1;

    printf("Enter a number to calculate it factorial: \n");
    scanf("%d", &number);

    while(number > 0){
        factorial *= number;
        number--;
    }
    if(number > 0){
        printf("%d! = %d\n", number, factorial);
    }
    else if(number == 0){
        printf("0! = 1\n");
    }
    else{
        printf("No negative ")
    }

    return 0;
}