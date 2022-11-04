#include <elf.h>
#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
		(((n << 16) >> 24) << 16) | (n >> 24))
/**
 * verify- verify the file to check if is a ELF
 * @e_ident: the ELF struct
 * return: no return is a void func.
 */
void verify(unsigned char *e_ident)
{
  if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
      *(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
    {
      printf("ELF Header:\n");
    }
  else
    {
      dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
      exit(98);
    }
}
/**
 * magic - print magic number
 * @e_ident: the ELF struct
 * return: no return is a void func.
 */
void magic(unsigned char *e_ident)
{
  int i; /* the index to count the magic bytes */
  int limit;
  
