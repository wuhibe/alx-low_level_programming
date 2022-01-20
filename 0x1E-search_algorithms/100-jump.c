#include "search_algos.h"
/**
 * jump_search - function that uses jump search
 * @array: array to search on
 * @size: size of array
 * @value: value to be searched
 * Return: Index of first value or -1 on fail
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i = 0;
	int check = 0;

	for (i = 0; i < size; i += step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	        if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n"
			       , i - step, i);
			check = 1;
			break;
		}
	}

	if (check != 0)
	{
		i = i - step;
		while (i < size && i < i + step)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			else
				i++;
		}
	}

	return (-1);
}
