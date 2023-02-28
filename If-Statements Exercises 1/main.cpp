#include <stdio.h>

int main() {

	//Temperature Program
    int hot = 33;
    int cold = 32;
  printf("Temperature Program\n");
  printf("Please enter a teerature in degrees C:\n");
  scanf("%d", &hot, &cold);

  if(hot >= cold){
      printf("It's hot outside\n");
  }
  if(hot <= cold){
    printf("It's chilly ourside\n\n");
  }

printf("------------------------------\n\n");
  
	//Positive, Negative, or Zero Program

  printf("Positive, Negative, or Zero program\n");
  printf("Please enter your number:\n");
  int num;
  scanf("%d", &num);
  
  
  if(num > 0){
    printf("Positive\n");
  }
  if(num < 0){
    printf("Negative\n");
  }
  if(num == 0){
    printf("Zero\n");
  }

  printf("\n-------------------------\n\n");
  
	//Colourful Name Program
  
  char Name[10];
  printf("Please Enter your name: ");
  scanf("%s", Name);
  
  int colour;
  printf("Please enter your colour choice(choose a number)");
  printf("Choices:\n 1.Red  2.Blue  3.Green\n");
  scanf("%d", &colour);

  if(colour == 1){
    printf("\033[0;31m%s", Name);
  }

  if(colour == 2){
    printf("\033[0;34m%s", Name);
  }
  if(colour == 3){
    printf("\033[0;32m%s", Name);
  }
	
}
