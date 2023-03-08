#include <stdio.h>

int main() {
	//WHILE LOOPS
	//While-loops run while a condition is true, then they exit
	int counter = 1;
	while(counter <= 10){
		printf("%d\n", counter);
		counter++;
	}
	printf("Done\n\n");

	//While-loops don't necessarily run at all
	int num = 10;
	while(num > 20){ //this condition will never be true
		printf("Here is some text!\n", num);
		printf("%d",num);
		num++;
	}
	printf("Done\n\n");

	//While-loops can accidentally run forever
	int counter2 = 1;
	while(counter2 > 0){ //this condition will always be true
		printf("%d\n", counter);
		counter++; //this can also happen if we forget the sentinel
	}
	printf("Done\n\n");
	
}
