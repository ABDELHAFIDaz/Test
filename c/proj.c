#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Number a = ");
    scanf("%d", &num1);
    printf("Number b = ");
    scanf("%d", &num2);

    // swaping the values
    swap(&num1, &num2);

    printf("after swapping:\n");
    printf("a = %d\n", num1);
    printf("b = %d\n", num2);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}