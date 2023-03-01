#include <stdio.h>
#include <string.h>

int main() {

	char password[] = "ldss2023";
	printf("Please enter the 8-digit password.\n");
	char entry[9];
	scanf("%s", entry);

  if(strcmp(entry, password)== 0 ){
    printf("Unlocked!\n");
    
  }
  if(strcmp(entry, password) != 0){
    printf("Try again!\n");
  }
	
}
