#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - make linear search
 * @array: array pointer
 * @size: array size
 * @value: value to search for
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value) {
    size_t i = 0;
    if (array == NULL) {
        return -1;
    }
    for (i = 0; i < size; i++) {
        printf("Value checked array[%ld] = [%d]\n", i , array[i]);
        if (value == array[i]) {
            return (i);
        }
    }
    
    return -1;
}
