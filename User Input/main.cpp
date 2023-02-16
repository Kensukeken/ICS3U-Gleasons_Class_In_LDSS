#include <stdio.h>

int main() {
  printf("Hi, how old are you?\n"); 
int age; //Create a variable to store the age
scanf("%d",&age); //Get value and store it in age

//Now you can use age wherever you want in your program
printf("In 10 years you will be %d",age+10);
  printf("\n");
  printf("........................\n");
  printf("\n");

  
  //GET A DOUBLE VALUE

  printf("What is the price item?\n");
    double price; 
  scanf("%lf", &price);
  printf("what is the rate\n");
  double tax;
  scanf("%lf", &tax );

  printf("The final price will be %d\n", price*tax);

  
}
