#include "3-calc.h"
/**
 * main - performs simple operations
 * @argv: pointer to the argument that enter from the user as char type
 * @argc: tell us the amount of arguments int type
 * Return: an integer with the result of a operation
 */
int main(int argc, char *argv[])
{
int (*funoperator)(int a, int b);
/* when the user enter the arguments there´s must be four elements */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* funoperator is gonna be equal to the pointer function */
funoperator = get_op_func(argv[2]);
if (!funoperator || strlen(argv[2]) != 1)
{
printf("Error\n");
exit(99);
}
/* add last condition, if user try to divides using % or / is Error */
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
/* if any of the conditions theeennn : */
printf("%d\n", funoperator(atoi(argv[1]), atoi(argv[3])));
return (0);
}
