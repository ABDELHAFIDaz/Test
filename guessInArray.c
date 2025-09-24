#include <stdio.h>

int main(){
    int numbers[] = {0, 1, 2, 6, 4, 5, 6, 7, 8, 9};
    int userInput;
    int counter = 0;

    printf("Enter a number: ");
    scanf("%d", &userInput);

    for(int i = 0; i < 10; i++){
        if(userInput == numbers[i]){
            counter++;
        }
    }

    if(counter == 0){
        printf("%d is not there!\n", userInput);
    }
    else{
        printf("There is %d %d's in the array!\n", counter, userInput);
    }

    return 0;
}