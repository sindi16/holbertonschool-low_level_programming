#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head node.
* Return: count
*/

size_t print_list(const list_t *h)
{
    size_t count = 0;
    int i;

    while (h != NULL)
    {
        count++;
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            for (i = 0; h->str[i] != '\0'; i++)
            {

            }
            printf("[%d] %s\n", i, h->str);
        }

        h = h->next;
    }
    return (count);
}