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
  
It multiplay the function

		1b: What do the numbers represent?

It repesent the string function based on number 

		1c: What will *(name + 11) print out? Predict first then test it out.

It will print the letter of function

		1d: What will *(name + 12) print out? Predict first then test it out.

Prints the number of the function


		1e: Write a line of code that will output the 'P' in the name.
	*/


  
	// 2 ---------------------------------------
	printf("\n");
	printf("Snippet 2:\n");
	printf("%zu \n", strlen(name));
	char enemy[] = "Voldemort";
	printf("%zu \n", strlen(enemy));

	/* Questions
		2a: What does the function strlen() do?



		2b: What type of data does %zu represent? (We will talk about this.)



		2c: Predict the output of the following:
		    char otherName[] = "Hermione Granger";
			printf("%zu \n", strlen(otherName));



		2d: Does the strlen() function count the \0 delimiter?



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



		3b: What happens if you chang owl[7] to owl[6]? Why does this happen?



		3c: What happens if you chang owl[7] to owl[10]?
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



		4b: What happens if you switch the order of the variables in the function? 
			strcat(lastName, friendName);
		4c: Can you figure out how to add a space between Ron and Weasley?



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



		5b: What do the numbers 1, -1, and 0 represent?



		5c: Predict what the following code will output and then check:
			printf("%d\n",strcmp(spell3, spell4));



		5d: Predict what the following code will output and then check:



			printf("%d\n",strcmp(spell2, spell4));
	*/

  

}
