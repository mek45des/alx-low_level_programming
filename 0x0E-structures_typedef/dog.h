#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - some information about the dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 *
 * Discription: struct called dog that stores name of dog
 * age of dog and owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
