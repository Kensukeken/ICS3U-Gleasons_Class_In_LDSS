# Welcome to ICS3U-Gleasons_Class_In_LDSS
Spring 2023 - GleasonsICS3U using C++. <br/>
I have recorded everything on what we learned in `C++` in Ms. Gleason Class In LDSS. They may be useful for your future. <br/>
Scroll down for more!

## File Naming Convention

 Use | File Type  |  Comments
 ----|------------|---------------
 Questions | **README.md**        | All questions of particular topic are mentioned in a `README.md` file inside the sub topic folder.
 C++ solutions | **[topic name].cpp**  | solution C++ code file code to a question is written in same folder where question is mentioned.
 Algorithm Solution | **[topic name]-algorithm.txt** | Algorithm solution to a question is written in a `.txt` txt file in same folder where question is mentioned.
 Technical Writing | **[topic name]-content.md** or **[topic name]-content.txt** | Technical content can be provided in simple `.txt` text document. You can also style it up and submit a `.md` file if you are aquainted with markdown language.

## Table of Contents
- [Hello World](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Hello%20World!) 
- [Block Letters](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Block%20Letters)
- [The Process](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/The%20Process)
- [Introduction to variables](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Introduction%20to%20variables) <br/>
	- [Variables and Output](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/blob/main/Introduction%20to%20variables/Variables%20and%20Output.cpp) 
- [Math Operators](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Math%20Operators)
- [Tax Calculator](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Tax%20Calculator)

- [New IO Library](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/New%20IO%20Library)
- [User Input](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/User%20Input)
- [Primitive Calculator](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Primitive%20Calculator)
- [Strings](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Strings)
- [Strings Functions](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/String%20Functions)
- [Add Colour to the Console](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Add%20Colour%20to%20the%20Console)
- [If statements](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Else%20Statements) <br/>
	- [If-Statements Exercises 1](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%201) <br/>
	- [If-Statements with Strings](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20with%20Strings)
	- [If-Else Statements](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Else%20Statements)
	- [If-Statements Exercises 3](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%203)
	- [Nested Ifs and Boolean Logic](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Nested%20Ifs%20and%20Boolean%20Logic)
	- [If-Statements Exercises 4](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%204)
- [Projects](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/My%20Projects) <br/>
	- [Trivia Game #1](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/My%20Projects/Trivia%20Game)<br/>
## Hello World!
Take a look at the hello.cpp file in the code editor that is placed in the middle of the screen. It’s a C++ program!

In our code editor, the file name is displayed at the top and along the left side. C++ programs are stored in files which usually have the file extension .cpp, which simply stands for “C Plus Plus”.

The code inside our C++ file is a classic first step all new programmers take — they greet the world through the console!

The console is the panel on the right and will show the output of our program.

## Output
C++, like most programming languages, runs line by line, from top to bottom. Here is the structure of a C++ program: <br/>
![Screen Short](https://media.discordapp.net/attachments/937568987565404170/1075602194809769984/yP8HzRM.png?width=1063&height=662)
In between the curly brackets is what we are going to focus on for now.

## Output Function & Punctuation

`std::cout` is the character output stream. It is pronounced “c-out”.

<< is an operator that comes right after it.

"Hello World!" is what’s being outputted here. You need double quotes around literal text.

`;` is a punctuation that tells the computer that you are at the end of a statement. It is similar to a period in a sentence. Almost every line we type will have one of these after it.

`\n` is a new line character. It moves the cursor to the next line.
Comments


## Comments
`//This is a comment!` <br/>
``/*This is a multi-
line comment!*/``<br/>
The computer ignores comments. We use comments to keep code organized, leave notes for ourselves, or leave notes for other programmers.

## Tasks
1. Add comments to our code.
2. Output lines of our own on separate lines.
3. Create the following pattern: <br/>
![Screen Short](https://media.discordapp.net/attachments/926667187006099466/1075603644155711570/aiMFBPqZpdwAAAABJRU5ErkJggg.png) <br/>

Check out here for this topic: [Hello World!](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Hello%20World!)
___________________________________________________________________________________________________________________________

## Introduction 
Using your knowledge of outputting to the console, write a program **called initials.cpp** that displays the initials of your name in block letters.
For example, if your initials were SL, your console output would look like this: <br/>
![image](https://user-images.githubusercontent.com/85637598/219512041-cb007226-c035-415f-a596-d3f0151ccab2.png) <br/>
Check out here for this topic: [Block Ltters](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Block%20Letters)
___________________________________________________________________________________________________________________________

# The Process

C++ is a compiled language. That means that to get a program to run, you must first translate it from the human-readable form to something a machine can “understand.” That translation is done by a program called a compiler.

What you read and write is called source code (usually it’s in an English-like language like C++), and what the computer executes is called machine code.

Typically C++ source code files are given the file extension:

`.cpp (ex: hello.cpp)`
![App Screenshot](https://cdn.discordapp.com/attachments/926667187006099466/1075554111694569564/download.png)

## Compile
`g++ hello.cpp -o hello`

A compiler translates the C++ program into machine language code which it stores on the disk as a file with the extension .o (e.g. hello.o). A linker then links the object code with standard library routines that the program may use and creates an executable image which is also saved on disk, usually as a file with the file name without any extension (e.g. hello).
# Execute:
`./hello`

The executable is loaded from the disk to memory and the computer’s CPU (Central Processing Unit) executes the program one instruction at a time.

# Tasks
- Compile and execute the program ourselves, without Repl.its run button doing it for us.
**Note**: You do not need to manually compile and execute future programs, but understand what is happening when we 'run' a program.

![ScreenShot](https://cdn.discordapp.com/attachments/926667187006099466/1075554111375818772/download_1.png) <br/>
Check out here for this topic: [The Process](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/The%20Process)
___________________________________________________________________________________________________________________________

## Introduction to Variables
The "Hello World!" program simply writes to the screen. It does not read anything, calculate anything, or allow for user input. That’s no fun!

Real programs tend to produce results based on some input that the user of the program gives, rather than just outputting the same thing every time.

To read something from the keyboard, we first need somewhere in the computer’s memory to store data. That is where variables come in.

A variable is simply a name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.

Think of it like a storage container. <br/>
![image](https://user-images.githubusercontent.com/85637598/219391582-d18c14c6-2baa-4282-909f-9fa0692984f6.png)

## Data Types
Every variable has a type, which represents the kind of information you can store inside of it. It tells your compiler how much memory to set aside for the variable, and it defines what you can do with the variable. <br/>
![image](https://user-images.githubusercontent.com/85637598/219391798-7b68d49e-1008-47df-8d12-ea6181d371c5.png)


## Assignment Operator =
In programming, the equals sign means we are assigning a value to a variable.

`int num1 = 10;`
That line of code created a variable that was ready to store an integer, and we gave the variable a value of 10.

## Tasks
Declare some variables using various data types.
Initialize those variables and declare and initialize on the same line.
Print those variables on screen.

## Arithmetic Operators
Computers are incredible at doing calculations. Now that we have declared variables, let’s use them with arithmetic operators to calculate things.

Here are the arithmetic operators:

`+` addition

`-` subtraction

`*` multiplication

`/` division

`%` modulo (divides and gives the remainder)

## Order of Operations
Expressions with more than one operator will follow BEDMAS. If you want certain calculations performed first, use brackets.

`answer = 4 - 5 * 2 + 3;` has a result of -3, whereas `answer = (4 - 5) * (2 + 3);` has a result of -5. <br/>
Check out here for this topic: [Interaction To Variables](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Introduction%20to%20variables)
___________________________________________________________________________________________________________________________

## Tax Calculator
Create a program that will calculate the tax on a price. <br/>
![image](https://user-images.githubusercontent.com/85637598/219392159-3cd3920e-4025-4bf9-bd64-a8c88d716d1a.png) <br/>
Check out here for this topic: [Tax Calculator](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Tax%20Calculator)
___________________________________________________________________________________________________________________________

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

`printf("The price with tax is %.2lf");` <br/>
Check out here for this topic: [New IO Library ](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/New%20IO%20Library)
___________________________________________________________________________________________________________________________

## Getting Numerical User Input
`scanf` allows us to get input from the user. We tell it what type of information to expect and where to store the value. Then we can use the value wherever we'd like.

```bash
printf("Hello, how old are you?\n");
int age; //Create a variable to store the age
scanf("%d",&age); //Get value and store it in age

//Now you can use age wherever you want in your program
printf("In 10 years you will be %d",age+10);
```
![image](https://user-images.githubusercontent.com/85637598/219511508-8300121e-f400-47b5-946f-aa0d7702bca2.png)

To scan an integer, use `%d` and to scan a double use `%lf`.

Side Note:
`scanf` has real trouble scannning chars, so trying to scan a %c usually doesn't work. But there is no need for them to fix it because alternatives for text exist (we will learn those soon). <br/>
Check out here for this topic: [User Input](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/User%20Input)

___________________________________________________________________________________________________________________________

## Make a Primitive Calculator
Create a program that gets 2 numbers from the user. Display the result of the 4 basic math operations (+, - , *, /). <br />
Here is a Sample Program:
<br />

![Screenshot](https://media.discordapp.net/attachments/926667187006099466/1075555639067168789/D0N7BktYqaviAAAAAElFTkSuQmCC.png)

## Didn't work? Check Out My Projects Below.

My assignment here (Using "int"):
[calc.cpp](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/blob/main/Primitive%20Calculator/calc.cpp) <br />
I also made another one but using "double" and that's still works:
[calc_using_double.cpp](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/blob/main/Primitive%20Calculator/calc_using_double.cpp) <br/>

Check out here for this topic: [Primitive Calculator](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Primitive%20Calculator)
___________________________________________________________________________________________________________________________

## Strings
Strings are a sequence of characters like a word or a phrase.

## Declaring Strings
There are many ways to declare a string. The following are a few different ways. You must include the square brackets [] because this denotes a list. You may put a number in the brackets to denote a length. You may initialize the text or get user input to fill the text.
```blash
char name[];
char name[10];
char name[] = "Gleason";
char name[8] = "Gleason";
char name[50] = "Gleason";
```
## Note
Just remember to include enough characters plus the "\0" delimiter.

## Scanning for Strings
Simply use the `scanf` function as usual with a %s placeholder, but no need for the ampersand.
```blash
char name[10];
printf("Enter a name.\n");
scanf("%s",name);
```

## Task
Ask the user for their first name, last name, and age and print a sentence that compiles the information: <br/>
![image](https://user-images.githubusercontent.com/85637598/220459114-639c24c7-51ca-4d3e-a9de-41546c1f5685.png) <br/>
Check out here for this topic: [Strings](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Strings)
___________________________________________________________________________________________________________________________

## String Functions
Run the code and answer the questions that follow each snippet to determine how each string function works.<br/>
Check out here for this topic: [String Functions](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/String%20Functions) 
___________________________________________________________________________________________________________________________

## Add colour to the Console
To change text color, precede your text with "\033[0;0m". <br/>
```bash
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
```
How it looks: <br/>
![image](https://user-images.githubusercontent.com/85637598/222797192-76eff990-404b-405b-ae68-86cb7a20f513.png) <br/>
## Add Colour and clear the Console
```bash
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
```
How it looks: <br/>
![image](https://user-images.githubusercontent.com/85637598/222796971-4eccf5ce-ee62-4ed7-9426-0e0453936707.png) <br/>
Check out the topic here: [Add Colour to the Console](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Add%20Colour%20to%20the%20Console) <br/>
___________________________________________________________________________________________________________________________

## If-Statements
The if-statement allows a computer to make a decision.

Is it hot outside?
Has the spaceship reached the edge of the screen?
Has too much money been withdrawn from the account?
If-statements are formatted like so:
```bash
if(condition){
	//execute this code
} 
```
<br/>


To check a condition, we can compare numbers (literal numbers or variables) using `<`, `<=`,`>`,`>=`,`==`,`!=`.

If the condition is true, the code inside the curly brackets will execute. If the condition is false, the code inside the curly brackets will be completely skipped over. 
Check out the topic here: [If-Statement](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements) <br/>
___________________________________________________________________________________________________________________________

## Create Programs Using If-Statements
1. Have a user enter a temperature. If the temperature is greater than 32 degrees, print `It's hot outside!` to the console. If the temperature is less than 4 degrees, print `It's chilly outside!` to the console.
2. Write a program that determines if a user-inputted number is negative, positive, or zero.
3. Write a program that allows a user to see their name printed in their chosen colour.
## Sample Program
![image](https://user-images.githubusercontent.com/85637598/221994228-fc306d49-d6d9-4f40-ad75-283b53a7e028.png)

Check out the topic here: [Create Programs Using If-Statements](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%201) <br/>

___________________________________________________________________________________________________________________________

## If-Else Statements
If-else statements allow us to have an or-else condition. If the condition of the if-statement is not met, it will execute the else statement. This allows us to link related information and have an or-else condition if necessary.

You can have 1 condition and 1 else statement:

```cpp
if(condition){
	//if true, execute this
} else {
	//otherwise, execute this
}
```
or you can have many conditions and 1 else statement:

```cpp
if(condition){
	//if true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
} else {
	//otherwise, execute this
}
```
or you can have many conditions and no else statement:
```cpp
if(condition){
	//if true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
}
```
It is important to note that only 1 if-statement will ever be executed as the other else's will be ignored if 1 is satisfied. <br/>
Check out the topic here: [If-Else Statements](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Else%20Statements)
___________________________________________________________________________________________________________________________
## If-Else Exercises
Use proper if-elseif-else chains to create the following programs:

1. Create a program that determines compares 2 inputted numbers. If one is greater than the other, tell the user. If the numbers are equal, tell the user.

2. Recreate this program that you flowcharted:
![image](https://user-images.githubusercontent.com/85637598/222163745-bb6500d0-3092-419f-8183-44fbc29e1f7d.png)
3. Write a program that takes in a users number grade and determines the value of their letter grade.

0-49%: F <br/>
50-59: D <br/>
60-69: C <br/>
70-79: B <br/>
80-100: A <br/>

![image](https://user-images.githubusercontent.com/85637598/222169618-b8b7a49b-ff9d-441b-8f06-d865a5a2209a.png) <br/>
![image](https://user-images.githubusercontent.com/85637598/222169812-4f40e19d-ca59-4798-8fd5-b314ead82ac0.png) <br/>
Check out the topic here: [If-Statements Exercises 3](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%203)
___________________________________________________________________________________________________________________________
## Nested Ifs and Boolean Operators Exercises
1. Trace the code and run it. What is the difference in output between Code A and Code B? Why does this occur?

2. I coded this snippet expecting it to print out Oranges since b=1. Why does this not occur? What would you do to fix it?

3. Rewrite this code snippet to use Boolean logic instead of nested ifs.

4. Write a program using an if-elseif-else chain and nested ifs OR Boolean operators that takes in 3 numbers from the user and determines the largest value of the 3. <br/>
![image](https://user-images.githubusercontent.com/85637598/222450158-62e33bb2-c81e-45ad-9550-d681ebe1f324.png) <br/>
Check out the topic here: [If-Statements Exercises 4](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/If-Statements%20Exercises%204)
___________________________________________________________________________________________________________________________

___________________________________________________________________________________________________________________________
