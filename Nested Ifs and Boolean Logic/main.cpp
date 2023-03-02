#include <stdio.h>
#include <string.h>

int main() {

	printf("Leamington is Having a Contest! \n");
	printf("You must be 16 years old and a resident of Leamington.\n");
	printf("Let's check your eligibilty.\n");
	printf("Please enter your age. ");
	int age;
	scanf("%d", &age);
	printf("Please enter the town you live in. ");
	char town[20];
	scanf("%s", town);

	//Contest Eligibility using Nested Ifs

	printf("\n");
    
	if(age >= 16){
    if(strcmp(town, "Leamington")){
      printf("Registration accepted!\n");
    } else {
      printf("Sorry you do not quality.\n");
    }
  } else {
      printf("Sorry you do not qualify.\n");
  }
  
  printf("\n");
	//Contest Eligibility using Boolean Operator AND &&
  if(age >= 16 && strcmp(town, "Leamington") == 0){
    printf("Registration accepted!\n");
  } else {
    printf("Sorry you do not quality.\n");
  }

	printf("\n\n---------------------\n\n");
	
	printf("Are You a Pet Owner?\n");
	printf("Do you own a dog?  yes/no\n");
	char dog[10];
	scanf("%s",dog);
	printf("Do you own a cat?  yes/no\n");
	char cat[10];
	scanf("%s",cat);

	//Pet Ownership using Boolean Operator OR ||
  if(strcmp(dog, "yes") == 0){
    printf("Congrats, you're a pet owner.\n");
  } else {
    printf("You are not a pet owner.\n");
  }
}
