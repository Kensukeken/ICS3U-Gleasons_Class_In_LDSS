#include <stdio.h>
#include <string.h>

int main() {

	char name[] = "Harry Potter";
	printf("%s\n", name);
	printf("\n");
	
	// 1 ---------------------------------------
	printf("Snippet 1:\n");
	printf("%c\n", *name);
	printf("%c\n", *(name + 1));
	printf("%c\n", *(name + 7));

	/* Questions
		1a: What is the purpose of the *?
		The * is the dereferencing operator and it is used to access the value pointed by a pointer.

		1b: What do the numbers represent?
		The numbers represent the positions of characters within the array. Specifically, *(name + 1) means the character at the second position of the array "name" and *(name + 7) means the character at the eighth position.

		1c: What will *(name + 11) print out? Predict first then test it out.
		*(name + 11) will print out the null character '\0'.
		
		1d: What will *(name + 12) print out? Predict first then test it out.
		*(name + 12) will print out some random value, as it is accessing memory outside the bounds of the array.

		1e: Write a line of code that will output the 'P' in the name.
		printf("%c\n", *(name + 6));
	*/


  
	// 2 ---------------------------------------
	printf("\n");
	printf("Snippet 2:\n");
	printf("%zu \n", strlen(name));
	char enemy[] = "Voldemort";
	printf("%zu \n", strlen(enemy));

	/* Questions
		2a: What does the function strlen() do?
		The function strlen() returns the length of a string, i.e. the number of characters in the string excluding the null character '\0' at the end.

		2b: What type of data does %zu represent? (We will talk about this.)
		%zu is a format specifier for printing a size_t variable, which is an unsigned integer type that can represent the size of any object in memory.

		2c: Predict the output of the following:
		    char otherName[] = "Hermione Granger";
			printf("%zu \n", strlen(otherName));
			
			printf("%zu \n", strlen(otherName)); will output 15, because "Hermione Granger" has 15 characters (including the space).

		2d: Does the strlen() function count the \0 delimiter?
		No, the strlen() function does not count the null character '\0'.
	*/

	// 3 ---------------------------------------
	printf("\n");
	printf("Snippet 3:\n");
	char pet[] = "Hedwig";
	char owl[7];
	printf("The owl's name is %s.\n",owl);
	
	strcpy(owl, pet);
	printf("The owl's name is %s.\n",owl);

	/* Questions
		3a: What does the function strcpy() do?
		The function strcpy() copies the contents of one string to another. The first argument is the destination string, and the second argument is the source string.

		3b: What happens if you chang owl[7] to owl[6]? Why does this happen?
		If owl[7] is changed to owl[6], the code will compile without errors, but the strcpy() function will write past the end of the owl array, which can cause undefined behavior.

		3c: What happens if you chang owl[7] to owl[10]?
		If owl[7] is changed to owl[10], the code will compile without errors, but it will still only allocate 7 bytes for the owl array, so the strcpy() function will write past the end of the array, which can cause undefined behavior.

	*/

	// 4 ---------------------------------------
	printf("\n");
	printf("Snippet 4:\n");
	char friendName[100] = "Ron";
	char lastName[] = "Weasley";
	printf("%s\n", friendName);
	printf("%s\n", lastName);
	
	strcat(friendName, lastName);
	printf("%s\n",friendName);

	/* Questions
		4a: What does the function strcat() do?
		The function strcat() concatenates two strings by appending the characters of the second string to the end of the first string.

		4b: What happens if you switch the order of the variables in the function? 
			strcat(lastName, friendName);
			
			If the order of the variables in the function is switched, strcat(lastName, friendName); will compile without errors, but it will concatenate "Ron" to "Weasley", which is probably not what was intended.
			
		4c: Can you figure out how to add a space between Ron and Weasley?
		To add a space between "Ron" and "Weasley", you can use the following code:
		```blash
		strcat(friendName, " ");
		strcat(friendName, lastName);```
	*/

	// 5 ---------------------------------------
	printf("\n");
	printf("Snippet 5:\n");
	char spell1[] = "alohomora";
	char spell2[] = "lumos";
	char spell3[] = "alohomora";
	char spell4[] = "Lumos";
		
	printf("%d\n",strcmp(spell1, spell2));
	printf("%d\n",strcmp(spell2, spell1));
	printf("%d\n",strcmp(spell1, spell3));
	printf("%d\n",strcmp(spell3, spell1));
	printf("%d\n",strcmp(spell3, spell2));
	

	/* Questions
		5a: What does the function strcmp() do?
		The function strcmp() compares two strings and returns an integer value that indicates the lexicographic relation between them.

		5b: What do the numbers 1, -1, and 0 represent?
		If the two strings are equal, strcmp() returns 0. If the first string is greater than the second, strcmp() returns a positive integer. If the first string is less than the second, strcmp() returns a negative integer.

		5c: Predict what the following code will output and then check:
			printf("%d\n",strcmp(spell3, spell4));
			
		 printf("%d\n", strcmp(spell3, spell4)); will output a negative integer, because "Hedwig" comes before "Voldemort" in lexicographic order.

		5d: Predict what the following code will output and then check:

			printf("%d\n",strcmp(spell2, spell4));
			
		printf("%d\n", strcmp(spell2, spell4)); will output a positive integer, because 'l' comes after 'L' in the ASCII table.

	*/

  

}
