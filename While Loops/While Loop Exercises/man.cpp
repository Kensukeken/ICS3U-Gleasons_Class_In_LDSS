#include <stdio.h>

int main() {
  //Question number 1 
  printf("Question 1\n");
  printf("Please enter your name:\n");
  char name[100];
  scanf("%s", name);
  int counter = 0;
  while (counter < 21){ 
    printf("%s\n", name); 
    counter++;
  }

printf("\n\n");
  
  //Question number 2 
  printf("Question 2\n"); 
    int num_times;
    printf("How many times do you want 'red' printed out on the screen?\n");
    scanf("%d", &num_times);

    for (int i = 0; i < num_times; i++) {
        printf("red\n");
    }
printf("\n\n");

  //Question number 3 
  printf("Question 3\n");
  printf("I'm thinking of a number between 1 to 10, can you guess it for me?\n");
  int input;
  while (true) {
    printf("Enter the answer: ");
    scanf("%d", &input);
    if (input == 3) {
      break;
  } else {
      printf("Not close enough, try again!\n");
      }
  }
    printf("Congratulations, you have successfully guessed the number!\n");

printf("\n\n");
  
  //Question number 4
  printf("Question 4\n");
  int countdown = 10;

  while (countdown >= 1) {
    printf("%d\n", countdown);
    countdown--;
  }
  printf("Blast off!\n");
}
