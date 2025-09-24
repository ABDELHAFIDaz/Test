#include <stdio.h>

void arrayFiller(int *array, int size); // or int array[]
void arrayWriter(int *array, int size);

int main(){
    int array[5];
    
    arrayFiller(array, 5);
    arrayWriter(array, 5);
    
    return 0;
}

void arrayFiller(int *array, int size){
    for(int i = 0; i < size; i++){
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }
}

void arrayWriter(int *array, int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}