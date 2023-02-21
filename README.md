# Welcome to ICS3U-Gleasons_Class_In_LDSS
Spring 2023 - GleasonsICS3U using C++. <br/>
Here what we learned in `C++` in Ms. Gleason Class In LDSS. They may be useful for your future.

## File Naming Convention

 Use | File Type  |  Comments
 ----|------------|---------------
 Questions | **README.md**        | All questions of particular topic are mentioned in a `README.md` file inside the sub topic folder.
 C++ solutions | **[topic name].cpp**  | solution C++ code file code to a question is written in same folder where question is mentioned.
 Algorithm Solution | **[topic name]-algorithm.txt** | Algorithm solution to a question is written in a `.txt` txt file in same folder where question is mentioned.
 Technical Writing | **[topic name]-content.md** or **[topic name]-content.txt** | Technical content can be provided in simple `.txt` text document. You can also style it up and submit a `.md` file if you are aquainted with markdown language.


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

## Introduction 
Using your knowledge of outputting to the console, write a program **called initials.cpp** that displays the initials of your name in block letters.
For example, if your initials were SL, your console output would look like this: <br/>
![image](https://user-images.githubusercontent.com/85637598/219512041-cb007226-c035-415f-a596-d3f0151ccab2.png) <br/>
Check out here for this topic: [Block Ltters](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Block%20Letters)


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


## Tax Calculator
Create a program that will calculate the tax on a price. <br/>
![image](https://user-images.githubusercontent.com/85637598/219392159-3cd3920e-4025-4bf9-bd64-a8c88d716d1a.png) <br/>
Check out here for this topic: [Tax Calculator](https://github.com/Kensukeken/ICS3U-Gleasons_Class_In_LDSS/tree/main/Tax%20Calculator)

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
