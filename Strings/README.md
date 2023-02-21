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
![image](https://user-images.githubusercontent.com/85637598/220459114-639c24c7-51ca-4d3e-a9de-41546c1f5685.png)
