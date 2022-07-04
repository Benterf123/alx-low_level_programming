#ifndef MY_DOG
#define MY_DOG

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner:  owner
 * Description: This struct is for my dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif /*DOG_H*/
