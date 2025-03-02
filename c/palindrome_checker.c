#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindrome_checker(char *array, int length);

int main()
{
    char string[100];
    char repeat;
    
    printf("\n=============== Palindrome Checker ===============\n");

    do{
        printf("\nEnter a word: ");
        scanf("%s", string);
        
        int length = strlen(string);

        if (palindrome_checker(string, length))
            printf("\n'%s' is a palindrome.\n", string);
        else
            printf("\n'%s' is NOT a palindrome.\n", string);
        
        printf("\nDo you wanna try again? (y/anythingelse)");
        scanf(" %c", &repeat);
        
    } while(tolower(repeat) == 'y');

    printf("\nSee you later!\n");

    return 0;
}

int palindrome_checker(char *array, int length)
{
    char *pFirst = array; // points to 1st element
    char *pLast = array + (length - 1); // points to last element

    while (pFirst < pLast)
    {
        if(tolower(*pFirst) != tolower(*pLast))
            return 0;
        pFirst++;
        pLast--;
    }
    return 1;
}