#include <stdio.h>

int main() {

	//Temp Program
	printf("Please enter a temperature. ");
	int temp;
	scanf("%d", &temp);

	if(temp > 32){ // if this condition is true,
		printf("It is hot. \n"); // execute this, otherwise
  } else if (temp < 4){ //if this condition is true,
		printf("It is cold. \n"); // excute this
	} else { // or else
    printf("It is a perfect day.\n"); //execute this
  }
  
	printf("\n\n");

	//Positive, Negative, Zero Program
	printf("Please enter a number. ");
	int num;
	scanf("%d", &num);
  if(num >0){
    printf("Positive\n");
  } else if(num < 0){
    printf("Negative\n");
  } else if(num == 0){
    printf("Zero\n");
  }
	
	printf("\n\n");

	//Voting Program
	printf("Please enter your age. ");
	int age;
	scanf("%d", &age);

  if(age >= 18){
    printf("You can vote!");
  } else{
    printf("You can not vote.");
  }
}
