## A New Input/Output Library
You will now see `#include <stdio.h>` as the first line of our program. This is an alternative input and output library that allows us to print to the console and get user input.

## Printing Text and Variables
To print variables and text together, indicate where you would like your variable to appear by using a % symbol and the appropriate letter indicating the type of variable.

| Type  | Symbol |
| ------------- | ------------- |
| Integer  | %d  |
| Character  | %c  |
| Double  | %lf  |

## Formatting Output
If we want to format our output (for example, keep prices to 2 decimal places), we can add number values to the % placeholder that will indicate the number of decimal places to show.

`printf("The price with tax is %.2lf");`
