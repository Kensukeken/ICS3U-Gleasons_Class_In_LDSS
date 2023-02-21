#include <stdio.h>
#include <string.h> //New library allows us to do strings

int main () {

	//Declare some strings!
  char name[] = ("Hia\n");
  printf("%s", name);

  char password[9] = "k&sxY6b2";
  printf("%s", password);

  //Scan a string!
  char userInput[100];// This is decline a size.
  printf("Enter a word or less than 100 character\n");
  scanf("%s", userInput); // will only scan until the first whitespace
	printf("Your word is: %s\n", userInput);

  //There are actual ways to print lines of data with space. if you ever need one. look it up. Will not it to this course.
  
  
	//Task
  char firstname[10]; 
  printf("Please enter your name:");
  scanf("%s", firstname);

  char lastname[10];
  printf("Please enter your last name");
  scanf("%s", lastname);
  
  char age[10000];
  printf("Please enter your age\n");
  scanf("%s", age);

  char useInput[100];
  printf("Welcome %s %s.", firstname, lastname);
  printf("You are %s", age);
  
}
