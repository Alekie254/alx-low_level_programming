#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new type
 * @owner: the name of the owner (Jay)
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;
/*task three, new type dog_t as new name of strcut dog */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
