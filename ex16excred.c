// C standard input/output header file.  Allows the use of printf.
#include <stdio.h>
// Header which allows use of the assert function.
#include <assert.h>
// C standard library.  Allows memory allocation.
#include <stdlib.h>
// Defines string handling functions such as NULL.
#include <string.h>

/* Define a structure called person and include 
four member variables: name, age, height, and weight.*/
struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

/* A function to neatly display the contents
of a Person structure.*/
void Person_print(struct Person who)
{
	printf("Name: %s\n", who.name);
	printf("\tAge:  %d\n", who.age);
	printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
}

/* Note:  the function Person_destroy is no longer
needed as the structures are now being created on 
the stack and not in the heap.*/

// Main function
int main(int argc, char *argv[])
{
	// Create a stucture on the stack
	struct Person joe;
		joe.name = "Joe Alex";
		joe.age = 32;
		joe.height = 64;
		joe.weight = 140;
	 
	// And another one... 
	struct Person frank;
		frank.name = "Frank Black";
		frank.age = 20;
		frank.height = 72;
		frank.weight = 180;
		
	/*Pass the structures to the Person_print function
	without pointers*/
	Person_print(joe);
	Person_print(frank);
	
	// Make everyone age 20 years and print them again
	joe.age += 20;
	joe.height -= 2;
	joe.weight += 40;
	Person_print(joe);
	
	frank.age += 20;
	frank.weight += 20;
	Person_print(frank);
	
	return 0;
}
