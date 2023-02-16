## Getting Numerical User Input
`scanf` allows us to get input from the user. We tell it what type of information to expect and where to store the value. Then we can use the value wherever we'd like.

```bash
printf("Hello, how old are you?\n");
int age; //Create a variable to store the age
scanf("%d",&age); //Get value and store it in age

//Now you can use age wherever you want in your program
printf("In 10 years you will be %d",age+10);
```

To scan an integer, use `%d` and to scan a double use `%lf`.

Side Note:
`scanf` has real trouble scannning chars, so trying to scan a %c usually doesn't work. But there is no need for them to fix it because alternatives for text exist (we will learn those soon).
