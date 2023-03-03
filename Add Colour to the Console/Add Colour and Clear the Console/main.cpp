#include <stdio.h>
#include <iostream> //lets us clear the screen

int main() {
	printf("Test Sentence\n");
	//To clear the console, wherever you'd like the clear to happen, import the iostream library above and type this line:
	system("clear");
	
   	//Add colour to the console!
      //uses ANSI Escape Sequences(can be found on github)
	/*  To change text color, precede your text with "\x1b[0;0m".
		Just replace the 0m with the colour code of your choice:
			Black	- text 30m background 40
			Red - text 31m bright 91- background 41 bright 101 
			Green	- text 32m bright 92- background 42 bright 102
			Yellow - text 33m bright 93 - background 43 bright 103
			Blue - text 34m bright 94 - background 44 bright 104
			Purple - text 35m bright 95 - background 45 bright 105
			Cyan - text 36m bright 96 - background 46 bright 10
			White	- text 37m bright 97 - background 47 bright 107
      	- text colour id \x1b[38;5;{ID}m    replace {ID} with numbers 16-231 or grey scale 232-255
      - background colour id \x1b[48;5;{ID}m
      - text colour RGB \x1b[38;2;{r};{g};{b};
      - background colour RGB \x1b[48;2;{r};{g};{b};
  		- 0m reset all
      - 1 bold reset 22
      - 2 dim reset 22
      - 3 italic reset 23
      - 4 underline reset 24
      - 7 inverse reset 27
      - 8 hidden reset 28
      - 9 strike through reset 29
  	*/

	//For example:
	printf("\x1b[1;31;47mHello in red!\x1b[0;0m\n");
	printf("\x1b[3;92mHello in bright green!\n");
  	printf("\x1b[38;5;175mHello in color ID\x1b[0;0m\n");
  	printf("\x1b[38;2;10;10;10mHello in rgb\n");
	printf("\033[0;35mHello in purple!\n");
	printf("\033[0;36mHello in cyan!\n");

	// ** Thanks Paige (aka God of Colour)! **

	
}
