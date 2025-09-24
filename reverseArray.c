#include <stdio.h>

int main(){
    int numbers[] = {0, 1, 2, 6, 4, 5, 6, 7, 8, 9};
    int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

    while(sizeOfNumbers > 0){
        printf("%d ", numbers[sizeOfNumbers - 1]);
        sizeOfNumbers--;
    }
    printf("\n");

    return 0;
}