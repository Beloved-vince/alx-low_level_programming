#ifndef DOG
#define DOG
/**
 * struct dog - define a new structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Strcture with info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif
