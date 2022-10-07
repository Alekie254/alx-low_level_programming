#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers from 0 to 10
 * @min: integer with 0 according to the main
 * @max: integer with 10 according to the main
 * Return: a pointer to the new array or NULL if it fail
 */
int *array_range(int min, int max)
{
/* create an int pointer variable for malloc */
int *newarray;
int positions;
/* set one of the task condition */
if (min > max)
return (NULL);
/* the array contains 0,1,2,3,4,5,6,7,8,9,10, with 11 total elements */
positions = max - min + 1;
/* now memory allocation */
newarray = malloc(positions * sizeof(int));
if (newarray == NULL)
return (NULL);
/* I must run the elements between 0 and 10 to set them in *newarray */
for (runner = 0; runner < positions; runner++, min++)
newarray[runner] = min;
return (newarray);
}
