#include <stdio.h>

/**
* write a function isPalindrome
* takes a string pointer as argument
* return 1 if palindrome else 0
* iterate to the mid of the string
* check extremity indexes till we reach to the middle
*/

int isPalindrome(char *str)
{
    int i;
    int length = 0;
    int j;

    for (i = 0; str[i] != '\0'; i++)
    {

    }
    length = i;

    for (j = 0; j < length / 2; j++)
    {
        if (str[j] != str[length - 1 -j])
            return (0);
    }
    return (1);
}

int main(void)
{
    char str[] = "madam";
    int result = isPalindrome(str);
    printf("Is palindrome: %d\n", result); // Output:

    return (0);
}