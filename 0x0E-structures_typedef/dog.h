#ifndef HEADER
#define HEADER
/**
 * struct dog - Dog attributes
 * @name: The Dog name
 * @age: The Dog age
 * @owner: The Dog owner's name
 *
 * Description: The Dog attribute
 */
struct dog
{

	char *name;
	float *age;
	char *owner;
};

/**
 * dog_t - Typedef for the Dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
