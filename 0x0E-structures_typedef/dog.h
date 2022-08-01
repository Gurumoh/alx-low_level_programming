#include <stdio.h>
#include "dog.h"

\**
* init_dog - initializes a variable type
* Return: nothing
*/

struct dog{
	char* name;
	float age;
	char* owner;
};
int main(void){
	struct dog my_dog;
	
	my_dog->.name = "Poppy";
	my_dog.age = 3.5;
	my_dog->.owner = "Bob";

	printf("%s", my_dog->.name);
	printf("%d", my_dog.age);
	printf("%s", my_dog->.owner);
}
