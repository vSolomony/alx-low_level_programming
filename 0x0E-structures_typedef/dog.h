#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a dog struct
 * @name: is name of dog
 * @age: is age of dog
 * @owner: is owner of dog
 * Description: a dog struct that has different features
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
