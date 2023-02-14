#include <iostream>

int main() { 
	
	/*1. Which of the following are appropriate variable names for the price of coffee?
	
	a.) priceOfCoffee
	b.) Coffee Price
	c.) coffee
	d.) coffee_price
	e.) price_of_coffee
	f.) c0ff33
	g.) c
	h.) 1coffee

// I think it's either "a" or either "e"
	

	2. What is wrong with ones that were not appropriate?

// 
- In b the computer doesn't understand the text using space
- In c it can be correct but i doens't related about "price of coffee" given to the question.
- In d it may be correct but it only messing "of"
- In f neither this because it doesn't match the following question.
- In g it doesn't match the question either
- In h it also doesn't match the following question
In my opinion, the correct answers are "a" and e.
	*/

	//3. Look at the code below, write your best guess for what it will output.

	
	std::cout << "Question 3 & 4: \n";
	int a = 5;
	int b = 3;
	int c = 1;
		
    std::cout << "a = " << a << " b = " << b << " c = " << c << "\n";   

	a = a + b;
	std::cout << a << "\n";
	std::cout << b + c << "\n";
	
	c = 0;
	std::cout << b + c << "\n";
	
	int d = a + b + c;
	std::cout << d << "\n";
  
  
	// it will be like this
  //Question 3 & 4: 
//a = 5 b = 3 c = 1
//8
//4
//3
//11

	//4. Uncomment the above code and run it. Were you correct? If not, what was your error?
	
//My comment were correct.

	//5. Look at the code below, write your best guess for what it will print.
	
	
	std::cout << "\nQuestion 5 & 6: \n";
	int e = 4;
	double f = 1.25;
	std::cout << e + f << "\n";
	
	double g = e + f;
	std::cout << g << "\n";
	
	g = e + 2.5;
	g = g + 1;
	std::cout << g << "\n";
  
	// It will print like this:
  //Question 5 & 6
  //  5.25 
  //  5.25
  //  7.5

	//6. Uncomment the above code and run it. Were you correct? If not, what was your error?

// No error were found while calculating this code.

	//7. Uncomment the commented code below. What is the mathematical result of the first line? What does the second line actually print to the console? Why?

	
	std::cout << "\nQuestion 7: \n";
	int h = e + f;
	std::cout << h << "\n";

  //e = 4
  //f = 1.25
  //4 + 1.25 = 5.25 = 5.
//Therefore, the answer will be 5.
	
} //Don't delete me or comment me out!
