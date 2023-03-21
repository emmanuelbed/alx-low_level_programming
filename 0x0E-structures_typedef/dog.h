#ifndef DOG_H
#define DOG_H


/**
* struct dog - a dog's basic info
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner's name
*
* This structure represents basic information about a dog, including its name,
* age, and owner's name.
*/
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - typedef for struct dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif

