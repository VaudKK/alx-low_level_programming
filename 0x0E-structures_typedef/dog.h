#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - dog struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: dog descritpion
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
#endif
