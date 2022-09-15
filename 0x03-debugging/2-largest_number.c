#include "main.h"
/**
* main - prints the largest of 3 integers
* @a: first int
* @b: second int
* @c: third int
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest = b;
if (a > b)
{
largest = a;
}
else if (c > b)
{
largest = c;
}
return (largest);
}
