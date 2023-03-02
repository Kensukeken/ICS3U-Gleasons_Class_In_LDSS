#include <stdio.h>

int main() {

	printf("Question 1:\n");
	//1. What is the difference in output between Code A and Code B? Why does this occur?
  
//Code A and Code B produce different outputs because Code A prints both "Red" and "Blue" due to both if statements being evaluated independently while Code B only prints "Red" because the else if statement is only evaluated if the first if statement is not true.

	int a = 10;

	printf("Code A: \n");
	if (a > 0){
	    printf("Red\n");
	}
	if (a > 5){
	    printf("Blue\n");
	}
	
	printf("\n");
	
	printf("Code B\n");
	if (a > 0){
	    printf("Red\n");
	}
	else if (a > 5) {
	    printf("Blue\n");
	}

  
	printf("\n\nQuestion 2:\n");
	//2. I coded this snippet expecting it to print out 'Oranges' since b=1. Why does this not occur? What would you do to fix it?

//The code doesn't print "Oranges" because the second if statement is nested inside the first one. To fix it, the second if statement should not be nested.

//Given code
/*
	int b = 1;

	if (b < 0){
	    printf("Apples");
	    if (b == 1){
	        printf("Oranges");
	        if (b > 1){
	            printf("Bananas");
	        }
	    }
	}
  */

//Here's the correct code:  
int b = 1;

if (b < 1) {
    printf("Apples");
}
else if (b == 1) {
    printf("Oranges");
}
else if (b > 1) {
    printf("Bananas");
}

	printf("\n\nQuestion 3:\n");
	//3. Rewrite this code snippet to use Boolean logic instead of nested ifs.

//Given code:  
/*
int c = 10;
int d = -2;

if (c > 0 && d < 0) {
    printf("Success!\n");
}
  */

//Here's the correct code:  
	int c = 10;
	int d = -2;

	if(c > 0){
		if(d < 0){
			printf("Success!\n");
		}
	}

	printf("\n\nQuestion 4:\n");
  
	//4. Write a program using an if-elseif-else chain and nested ifs OR Boolean operators that takes in 3 numbers from the user and determines the largest value of the 3.
  int num1, num2, num3; 
  printf("Enter 3 numbers:\n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 >= num2){
    
    if(num1 >= num3)
      printf("%d is the largest.", num1);
    else
      printf("%d is the largest.", num3);

  } else {
    if(num2 >= num3)
      printf("%d is the largest.", num2);
    else
      printf("%d is the largest.", num3);
  }
}
