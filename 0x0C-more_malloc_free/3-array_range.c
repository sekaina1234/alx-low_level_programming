#include "main.h"
#include <stdlib.h>
/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
int *arr, j, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (j = 0; j < size; j++)
arr[j] = min + j;
return (arr);
}
