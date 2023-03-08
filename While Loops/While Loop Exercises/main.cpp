#include <stdio.h>

int main() {
  printf("Question 1\n");
  printf("Please enter your name:\n");
  char name[100];
  scanf("%s", name);
  int counter = 0;
  while (counter < 21){ 
    printf("%s\n", name); 
    counter++;
  }
  printf("Question 2\n"); 
    int num_times;
    printf("How many times do you want 'red' printed out on the screen?\n");
    scanf("%d", &num_times);

    for (int i = 0; i < num_times; i++) {
        printf("red\n");
    }
  printf("Question 3\n");
  /*
  char names[10][50];
  int a = 0;

  while (a < 10) {
    printf("Enter the answer: \n");
    scanf("%s", names[a]);
    a++;
  }

  // Print the names
  for (int a = 0; a < 10; a++) {
    printf("Name %d: %s\n", a+1, names[a]);
  }
  */

  /*
    int number = 0;

  while (number < 1 || number > 10) {
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10) {
      printf("Please enter a number between 1 and 10.\n");
    }
  }

  printf("You entered: %d\n", number);
*/

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

  
  printf("Question 4\n");
  int countdown = 10;

  while (countdown >= 1) {
    printf("%d\n", countdown);
    countdown--;
  }
  printf("Blast off!\n");
}
