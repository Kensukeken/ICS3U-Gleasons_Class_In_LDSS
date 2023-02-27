#include <stdio.h>

int main() {
  	//Add colour to the console!

	/*  To change text color, precede your text with "\033[0;0m".
		Just replace the 0m with the colour code of your choice:
  		- 30m black
  		- 31m red
  		- 32m green
  		- 33m yellow
  		- 34m blue
  		- 35m purple
  		- 36m cyan
  		- 37m white
  		- 0m reset
  	*/

	//For example:
	printf("\033[0;31mHello in red!\n");
	printf("\033[0;32mHello in green!\n");
	printf("\033[0;35mHello in purple!\n");
	printf("\033[0;36mHello in cyan!\n");
	
}
