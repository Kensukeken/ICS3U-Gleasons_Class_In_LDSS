#include <stdio.h>
#include <string.h>

int main() {
  	//1. COMPARE NUMBERS
	printf("Please enter 2 number:\n");
  int num1;
  int num2;
  scanf("%d", &num1);
  scanf("%d" , &num2);
  
  if(num1 > num2){
    printf("The first number is greater than the second number.\n");
  } 
  if(num1 < num2){
    printf("The first number is less than second number \n");
  }
  if(num1 == num2){
    printf("The number are equal");
  }

	printf("\n\n-----------------------\n\n");


  
	//2. VENDING MACHINE
  printf("Welcome to the Vending Machine\n");

  char foodName[100];
  
  printf("Please make your choice:\n");
  printf("Cheetos   Twix   KitKat   Sunchips\n");
  scanf("%s", foodName);
  if (strcmp(foodName, "Cheetos") == 0){
    printf("$0.50");
  } 
  if (strcmp(foodName, "Twix") == 0){
    printf("$1");
  }
  if (strcmp(foodName, "KitKat") == 0){
    printf("$1.25");
  }
  if (strcmp(foodName, "Sunchips") == 0){
    printf("$0.75");
  }
  
	printf("\n\n-----------------------\n\n");

  
	//3. GRADES
  printf("Enter your grade:\n");
  int grade;
  scanf("%d", &grade);

  if (grade <= 49){
    printf("F");
  }
  else if(grade <= 59){
    printf("D");
  }
  else if(grade <= 69){
    printf("C");
  }
  else if(grade <= 79){
    printf("B");
  }
  else if(grade <= 100){
    printf("A");
  }
    else {
    printf("Error: Invalid grade entered. Please enter a grade between 0 and 100.\n");
  }
}
