#ifndef DOG_H
#define DOG_H dog.h
/**
 * struct dog - Define a new struct dog with name, age, owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(my_dog *d, char *name, float age, char *owner);
void print_dog(my_dog *d);
typedef my_dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
