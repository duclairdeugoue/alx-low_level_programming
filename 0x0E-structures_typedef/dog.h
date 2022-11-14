#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure
 * @name: First member
 * @age: Second member
 * @owner: Third memeber
 *
 * Descrition: dog properties
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
