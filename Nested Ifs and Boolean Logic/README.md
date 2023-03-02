## Nested Ifs
Nested if-statements can check multiple conditions. If the first condition is satisfied, it can check the next. If that condition is satisfied, it can check the next. And so on...
```bash
if(condition){
	if(condition){
 		if(condition){
   			....
		}
	}
}
```
Boolean Logic Operators
As an alternative to nested ifs, we can use the AND operator: &&

We can put more than 1 condition in the brackets separated by the AND symbol.
```bash
if(conditionA && conditionB){
	//if conditionA and conditionB are true, this will run
}
```
There is also another Boolean logic operator called OR: || This allows the if-statement to execute if only 1 of the conditions is true.
```bash
if(conditionA || conditionB){
	//if conditionA is true or conditionB is true, this will run
}
```
You can have as many conditions as you like and you can use the && and || operators in the same conditional sentence if needed.
