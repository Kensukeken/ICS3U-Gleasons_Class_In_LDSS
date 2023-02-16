#include <stdio.h>

int main() {
	//New way to print to the console
  	printf("Hello World\n");
  printf("Kensukeken\n");
	
	//Printing text and variables
	int age = 17;
	char initial = 'K';

  printf("I am %d years old\n"); int;
  printf("My first initial is %c\n"); char;
  printf("I am %d years old and my initial is %c\n");
  
	double pi = 3.141592;
	printf("%lf\n", pi);
	pi = 3.14159;
	printf("%lf\n", pi);
	pi = 3.1415926;
	printf("%lf\n", pi);
		
	//Formatting decimals
	double price = 2.59;
	double tax = 1.13;
printf("The price with tax is %.2lf", price * tax);
}
