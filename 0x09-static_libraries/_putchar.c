#include <unistd.h>
/**
 *_putchar writes the character c to stdout
 *@cThe character to print
 *Return: on success
 *on error -1 is returned and error number is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
