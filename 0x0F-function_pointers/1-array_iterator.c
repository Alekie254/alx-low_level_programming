#include "function_pointers.h"
/**
 * array_iterator - executes a functionas parameter of each element of an array
 * @array: pointer to an int
 * @size: variable type size_t
 * @action: pointer to a function that receives an int
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
/* unsigned int because an error told me */
/* so elements in the array unsigned integers */
unsigned int elements;
/* run through the array to know which are the elements */
/* elements runs while it is less than the size ofc. */
if (action && array)
{
for (elements = 0; elements < size; elements++)
action(array[elements]);
}
/* so de-reference the pointer to the function */
}
