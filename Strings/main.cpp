#include <stdio.h>
#include <string.h> //New library allows us to do strings

int main () {

	//Declare some strings!
  char name[] = ("Kensukeken\n");
  printf("%s", name);

  char password[9] = "!@#$%6&ey";
  printf("%s", password);

  //Scan a string!
  char userInput[100];// This is decline a size.
  printf("Enter a word or less than 100 character\n");
  scanf("%s", userInput); // will only scan until the first whitespace
	printf("Your word is: %s\n", userInput);

  //There are actual ways to print lines of data with space. if you ever need one. look it up. Will not it to this course.
  
  
// Task
  char firstname[11]; // Increased the size to accommodate up to 10 characters plus the null terminator
  printf("Please enter your first name: ");
  scanf("%10s", firstname); // Limited the input to 10 characters and added the size specifier

  char lastname[11]; // Increased the size to accommodate up to 10 characters plus the null terminator
  printf("Please enter your last name: ");
  scanf("%10s", lastname); // Limited the input to 10 characters and added the size specifier

  int age;
  printf("Please enter your age: ");
  scanf("%d", &age);
  
  printf("Welcome %s %s! You are %d years old.\n", firstname, lastname, age); // Combined the output and added a newline character

}
