#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: fotmat of characters (ceis)
 * Return: void
 */
void print_all(const char * const format, ...)
{
/* with the type structure define now I can create the structure */
characters arraychars[] = {
{"c", printchar},
{"i", printinteger},
{"f", printfloat},
{"s", printstring},
{NULL, NULL}
};
int runf = 0;
int runarr = 0;
char *spacecomma = "";
va_list charlist;
/* would be the variable tyupe va_list followed by the format */
va_start(charlist, format);
while (format != NULL && format[runf] != '\0')
{
/* the array has four elements */
runarr = 0;
while (runarr < 4)
{
/* dereferenced to the pointer arguments */
if (format[runf] == *arraychars[runarr].arguments)
{
printf("%s", spacecomma);
arraychars[runarr].ptrfunc(charlist);
spacecomma = ", ";
break;
}
runarr++;
}
runf++;
}
printf("\n");
va_end(charlist);
}
/**
 * printchar - prints a char
 * @charlist: type va_list that iterates through the arguments
 * Return: void
 */
void printchar(va_list charlist)
{
printf("%c", va_arg(charlist, int));
}
/**
 * printinteger - prints an integer
 * @charlist: type va_list that iterates through the arguments
 * Return:void
 */
void printinteger(va_list charlist)
{
printf("%d", va_arg(charlist, int));
}
/**
 * printfloat - prints a double
 * @charlist: type va_list that iterates through the arguments
 * Return: void
 */
void printfloat(va_list charlist)
{
printf("%f", va_arg(charlist, double));
}
/**
 * printstring - prints a string
 * @charlist: type va_list
 * Return: void
 */
void printstring(va_list charlist)
{
/* as the task show us, s : char * */
char *str;
/* de-reference str to the arg passed to the function */
str = va_arg(charlist, char *);
if (str == NULL)
str = "(nil)";
/* if its NULL will print nil, else will print str */
printf("%s", str);
}
