#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Searches for a value
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array)
{
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
}

return (-1);
}
