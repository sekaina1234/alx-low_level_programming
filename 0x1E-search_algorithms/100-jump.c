#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array
 *
 * @array: Pointer to the first element of the sorted array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
int jump;
size_t i;

if (!array)
return (-1);
jump = sqrt(size);
i = 0;
do {
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
i += jump;
if (i >= size)
break;
} while (array[i] < value);
printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
i -= jump;
while (array[i] < value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
++i;
if (i == size)
return (-1);
}
if (array[i] == value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
return (i);
}
return (-1);
}
