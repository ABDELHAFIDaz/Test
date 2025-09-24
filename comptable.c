#include <stdio.h>

float calculerMoyenne(float array[], int size);

int main(){
    float notes[] = {12.32, 15.73, 8.45, 18, 14.90};
    int sizeOfNotes = sizeof(notes) / sizeof(notes[0]);
    
    float moyenne = calculerMoyenne(notes, sizeOfNotes);

    printf("La moyenne est: %.2lf.\n", moyenne);

    return 0;
}

float calculerMoyenne(float array[], int size){
    float sum = 0;
    int numberOfNotes = 0;

    for(int i = 0; i < size; i++){
        sum += array[i];
        numberOfNotes++;
    }

    return (sum / numberOfNotes);
}