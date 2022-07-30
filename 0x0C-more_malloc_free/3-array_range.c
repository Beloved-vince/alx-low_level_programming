#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min: value lower
 * @max: value higher
 * Return: 0
 */
int *array_range(int min, int max)
{
		int *point;
		int position, count = 0;

		if (min > max)
			return (NULL);
		position = (max - min) + 1;
		point = malloc(position * sizeof(int));
		if (point == NULL)
			return (NULL);
		for (; count < position; count++)
			point[count] = min;
			min += 1;

		return (point);
}
