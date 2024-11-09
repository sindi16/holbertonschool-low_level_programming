#include <stdio.h>

/**
 * array_numbers - counts how many times a target number appears in an array.
 * @numbers: an array with different numbers
 * @size: size of the array
 * @target: the number to count in the array
 * Return: count of how many times target appears in the array
 */
int array_numbers(int numbers[], int size, int target) {
    int count = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        if (numbers[i] == target) {  // Use == for comparison
            count++;
        }
    }
    
    return count;
}

int main() {
    int numbers[] = {4, 1, 4, 2, 4, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 4;  // The number we want to count
    int result = array_numbers(numbers, size, target);
    
    printf("The number %d appears %d times in the array.\n", target, result);

    return 0;
}
