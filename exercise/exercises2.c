#include <stdio.h>

/**
* write a function countVowelsConsonants
* takes a string pointer as argument
* takes also two int pointers for each category vowel or consonant
* counts vowels and consonants
*/

void countVowelsConsonants(char *str, int *v, int *c )
{
    *v = 0;
    *c = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
            {
                (*v)++;
            }
            else
                (*c)++;
        }
        else
            continue;
    }
}


int main()
{
    char str[] = "Coding";
    int vowels, consonants;
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    
    return (0);
}