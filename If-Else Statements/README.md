## If-Else Statements
If-else statements allow us to have an or-else condition. If the condition of the if-statement is not met, it will execute the else statement. This allows us to link related information and have an or-else condition if necessary.

You can have 1 condition and 1 else statement:

```bash
if(condition){
	//if true, execute this
} else {
	//otherwise, execute this
}
```
or you can have many conditions and 1 else statement:

```bash
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
```bash
if(condition){
	//if true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
} else if (condition) {
	//otherwise, if this is true, execute this
}
```
It is important to note that only 1 if-statement will ever be executed as the other else's will be ignored if 1 is satisfied.
