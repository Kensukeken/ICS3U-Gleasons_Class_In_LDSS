## Comparing Strings
We can use if-statements with strings as well, but we can not use the boolean operators we used with numbers. We must use the `strcmp` function which produces a 0, -1, or 1 for same word, less alphabetically, or greater alphabetically. We can compare strings in an if-statement by creating a Boolean condition.
```bash
if (strcmp(string1,string2) == 0){
	printf("These words are the same!\n");
}
```
