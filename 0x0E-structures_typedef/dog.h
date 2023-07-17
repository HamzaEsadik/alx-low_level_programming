#ifndef HEADER
#define HEADER
/**
 * struct dog - the object
 * @name: his name
 * @age: his age
 * @owner: his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
